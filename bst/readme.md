# Binary Search Tree 
### BY Iot Noob
## Introduction
A binary search tree is a rooted binary tree, whose internal nodes each store a key (and optionally, an associated value), and each has two distinguished sub-trees, commonly denoted left and right. The tree additionally satisfies the binary search property: the key in each node is greater than or equal to any key stored in the left sub-tree, and less than or equal to any key stored in the right sub-tree.[1]:287 The leaves (final nodes) of the tree contain no key and have no structure to distinguish them from one another.
Or 
A binary search tree is a rooted binary tree, whose internal nodes each store a key (and optionally, an associated value), and each has two distinguished sub-trees, commonly denoted left and right. The tree additionally satisfies the binary search property: the key in each node is greater than or equal to any key stored in the left sub-tree, and less than or equal to any key stored in the right sub-tree.[1]:287 The leaves (final nodes) of the tree contain no key and have no structure to distinguish them from one another.
## Representation
BST is a collection of nodes arranged in a way where they maintain BST properties. Each node has a key and an associated value. While searching, the desired key is compared to the keys in BST and if found, the associated value is retrieved.
Following is a pictorial representation of BST −
 
 ![BST](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_tree.jpg)
## Basic Operations
Following are the basic operations of a tree −

* ***Search*** − Searches an element in a tree.

* ***Insert*** − Inserts an element in a tree.

* ***Pre-order*** Traversal − Traverses a tree in a pre-order manner.

* ***In-order Traversal*** − Traverses a tree in an in-order manner.

* ***Post-order Traversal*** − Traverses a tree in a post-order manner.
## Node
Define a node having some data, references to its left and right child nodes.
```c++
struct node {
   int data;   
   struct node *leftChild;
   struct node *rightChild;
};
 ```
## Search Operation
Whenever an element is to be searched, start searching from the root node. Then if the data is less than the key value, search for the element in the left subtree. Otherwise, search for the element in the right subtree. Follow the same algorithm for each node.
 ```c++
struct node* search(int data){
   struct node *current = root;
   printf("Visiting elements: ");
	
   while(current->data != data){
	
      if(current != NULL) {
         printf("%d ",current->data);
			
         //go to left tree
         if(current->data > data){
            current = current->leftChild;
         }  //else go to right tree
         else {                
            current = current->rightChild;
         }
			
         //not found
         if(current == NULL){
            return NULL;
         }
      }			
   }
   
   return current;
}
 ```
# Insert Operation
Whenever an element is to be inserted, first locate its proper location. Start searching from the root node, then if the data is less than the key value, search for the empty location in the left subtree and insert the data. Otherwise, search for the empty location in the right subtree and insert the data.
 ```c++
 void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;

      while(1) {                
         parent = current;
			
         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;                
            //insert to the left
				
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->rightChild;
            
            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }            
   }
}        
  ```
## Hardware you need
- Arduino uno or any other arduino base board
 




## In the end
This is version 0.0.1 Created by iot NOOB in thisyou can use binary search tree to insert Strings and store them inside Binary search tree this is not end of this project i am working on its update soon be released 


## Aurthor 
IOT Noob
Created on 1/8/2021 



