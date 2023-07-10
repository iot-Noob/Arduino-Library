#include"BinaryTree.h"

// Example usage
BinaryTree<int> tree;

void printValue(const int& value) {
  Serial.println(value);
}

void setup() {
  Serial.begin(9600);
  
  tree.insert(5);
  tree.insert(3);
  tree.insert(8);
  tree.insert(2);
  tree.insert(4);
  tree.insert(6);
  tree.insert(9);

  tree.bfs(printValue);
  // Outputs: 5 3 8 2 4 6 9

  tree.dfs(printValue);
  // Outputs: 5 3 2 4 8 6 9

  if (tree.search(6)) {
    Serial.println("Found!");
  } else {
    Serial.println("Not found!");
  }

  tree.remove(6);
  tree.dfs(printValue);
  // Outputs: 5 3 2 4 8 9

  tree.clear();
}

void loop() {
  // Your code here
}
