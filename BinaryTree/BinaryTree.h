#include <Arduino.h>
#include "QueueList.h"

#ifndef BinaryTree_h
#define BinaryTree_h

template <typename T>
class BinaryTree {
private:
  struct Node {
    T data;
    Node* left;
    Node* right;

    Node(const T& value)
        : data(value), left(nullptr), right(nullptr) {}
  };

  Node* root;

  void clearRecursive(Node* node) {
    if (node) {
      clearRecursive(node->left);
      clearRecursive(node->right);
      delete node;
    }
  }

  Node* insertRecursive(Node* node, const T& value) {
    if (node == nullptr)
      return new Node(value);

    if (value < node->data)
      node->left = insertRecursive(node->left, value);
    else if (value > node->data)
      node->right = insertRecursive(node->right, value);

    return node;
  }

  bool IsPresent(Node* node, const T& value) const {
    if (node == nullptr)
      return false;

    if (value == node->data)
      return true;

    if (value < node->data)
      return IsPresent(node->left, value);
    else
      return IsPresent(node->right, value);
  }

  Node* Find(Node* node, const T& value) const {
  if (node == nullptr || value == node->data)
    return node;

  if (value < node->data)
    return Find(node->left, value);
  else
    return Find(node->right, value);
}


  Node* findMin(Node* node) {
    while (node->left != nullptr)
      node = node->left;
    return node;
  }

  Node* deleteRecursive(Node* node, const T& value) {
    if (node == nullptr)
      return nullptr;

    if (value < node->data)
      node->left = deleteRecursive(node->left, value);
    else if (value > node->data)
      node->right = deleteRecursive(node->right, value);
    else {
      if (node->left == nullptr) {
        Node* temp = node->right;
        delete node;
        return temp;
      } else if (node->right == nullptr) {
        Node* temp = node->left;
        delete node;
        return temp;
      }

      Node* temp = findMin(node->right);
      node->data = temp->data;
      node->right = deleteRecursive(node->right, temp->data);
    }
    return node;
  }

  void bfsRecursive(Node* node, void (*callback)(const T&)) const {
    if (node == nullptr)
      return;

    QueueList<Node*> queue;
    queue.push(node);

    while (!queue.isEmpty()) {
      Node* curr = queue.pop();

      callback(curr->data);

      if (curr->left != nullptr)
        queue.push(curr->left);
      if (curr->right != nullptr)
        queue.push(curr->right);
    }
  }

  void dfsRecursive(Node* node, void (*callback)(const T&)) const {
    if (node == nullptr)
      return;

    callback(node->data);
    dfsRecursive(node->left, callback);
    dfsRecursive(node->right, callback);
  }

public:
  BinaryTree()
      : root(nullptr) {}

  ~BinaryTree() {
    clear();
  }

  void insert(const T& value) {
    root = insertRecursive(root, value);
  }

  bool Present(const T& value) const {
    return IsPresent(root, value);
  }

const Node* search(const T& value) const {
  return Find(root, value);
}

  void remove(const T& value) {
    root = deleteRecursive(root, value);
  }

  void clear() {
    clearRecursive(root);
    root = nullptr;
  }

  void bfs(void (*callback)(const T&)) const {
    bfsRecursive(root, callback);
  }

  void dfs(void (*callback)(const T&)) const {
    dfsRecursive(root, callback);
  }
};

#endif
