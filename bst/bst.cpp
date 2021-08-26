#include"bst.h"
#include"Arduino.h"

BST::BST() {
root = NULL;
}

BST::~BST() {
root = makeEmpty(root);
}

    void BST::insert(String  x) {
        root = insert(x, root);
    }

    void BST::remove(String x) {
        root = remove(x, root);
    }

    void BST::display() {
        inorder(root);
       Serial.print("\n");
    }

 String  BST::search(String x) {
      root = find(root, x);
      return root->data;
    }
    void  BST::begin(int b=9600) {
    	Serial.begin(b);
	}
