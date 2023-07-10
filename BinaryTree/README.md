# Binary Tree For Arduino 

MyLibrary is an Arduino library for working with binary trees. It provides a BinaryTree class that allows users to create, manipulate, and traverse binary trees. It is designed to be used with Arduino boards.

## Installation

To use MyLibrary in your Arduino project, follow these steps:

1. Download the MyLibrary repository from GitHub.
2. Extract the contents of the repository.
3. Rename the extracted folder to "MyLibrary".
4. Copy the "MyLibrary" folder into the Arduino libraries folder. The path to the libraries folder varies depending on your operating system:

   - **Windows**: Documents/Arduino/libraries
   - **Mac**: Documents/Arduino/libraries
   - **Linux**: Sketchbook/libraries

5. Restart the Arduino IDE if it was already open.
6. In the Arduino IDE, go to "Sketch" -> "Include Library" -> "MyLibrary".

## Usage

### BinaryTree.h

The `BinaryTree.h` file contains the implementation of the `BinaryTree` class, which provides the following functions:

#### `BinaryTree()`

- Constructor for the `BinaryTree` class.
- Creates an empty binary tree.
- Initializes the `root` pointer to `nullptr`.

#### `~BinaryTree()`

- Destructor for the `BinaryTree` class.
- Calls the `clear()` function to clear the binary tree and free the memory.

#### `void insert(const T& value)`

- Inserts a new element with the given value into the binary tree.
- If the tree is empty, the new element becomes the root.
- If the value is less than the current node's value, it is inserted to the left subtree.
- If the value is greater than the current node's value, it is inserted to the right subtree.
- Uses a recursive helper function `insertRecursive()` to traverse the tree and find the appropriate position for insertion.

#### `bool Present(const T& value) const`

- Checks if a value is present in the binary tree.
- Returns `true` if the value is found, `false` otherwise.
- Uses a recursive helper function `IsPresent()` to traverse the tree and compare values.

#### `const Node* search(const T& value) const`

- Searches for a value in the binary tree.
- Returns a pointer to the node with the matching value, or `nullptr` if not found.
- Uses a recursive helper function `Find()` to traverse the tree and search for the value.

#### `void remove(const T& value)`

- Removes the node with the given value from the binary tree.
- Uses a recursive helper function `deleteRecursive()` to traverse the tree and find the node to delete.
- Handles different cases:
  - If the node to delete has no children, it is simply deleted.
  - If the node to delete has only one child, that child takes its place.
  - If the node to delete has two children, it is replaced by the smallest node in its right subtree.
- Uses a recursive helper function `findMin()` to find the smallest node in a subtree.

#### `void clear()`

- Clears the binary tree, deleting all nodes and freeing the memory.
- Calls the recursive helper function `clearRecursive()` to traverse the tree and delete each node.

#### `void bfs(void (*callback)(const T&)) const`

- Performs a breadth-first search traversal of the binary tree.
- Calls the specified callback function for each node in the tree.
- Uses a queue data structure implemented in the [`QueueList.h`](https://github.com/iot-Noob/Arduino-Library/tree/main/Arduino-QueueList-master) file to keep track of the nodes.

#### `void dfs(void (*callback)(const T&)) const`

- Performs a depth-first search traversal of the binary tree.
- Calls the specified callback function for each node in the tree.
- Uses a recursive helper function `dfsRecursive()` to traverse the tree in a pre-order manner.

### QueueList.h

The [`QueueList.h`](https://github.com/iot-Noob/Arduino-Library/tree/main/Arduino-QueueList-master) file contains an implementation of a queue using a linked list.

...

### Talha.h

The `Talha.h` file defines the `Talha` class, representing an object that can be stored in the binary tree. It provides the following functions:

#### `Talha()`

- Default constructor for the `Talha` class.
- Initializes the `id`, `age`, and `name` to default values.

#### `Talha(int i, int a, String n)`

- Constructor for the `Talha` class.
- Initializes the `id`, `age`, and `name` with the specified values.

#### `int getId() const`

- Getter function for the `id` member variable.
- Returns the value of the `id`.

#### `int getAge() const`

- Getter function for the `age` member variable.
- Returns the value of the `age`.

#### `String getName() const`

- Getter function for the `name` member variable.
- Returns the value of the `name`.

#### `bool operator<(const Talha& other) const`

- Comparison operator (<) overload for `Talha` objects.
- Allows comparing `Talha` objects based on their `id`, `age`, and `name`.

#### `bool operator>(const Talha& other) const`

- Comparison operator (>) overload for `Talha` objects.
- Allows comparing `Talha` objects based on their `id`, `age`, and `name`.

#### `bool operator==(const Talha& other) const`

- Equality operator (==) overload for `Talha` objects.
- Allows comparing `Talha` objects based on their `id`, `age`, and `name`.

### Example Usage

Here's an example sketch (`example.ino`) that demonstrates how to use MyLibrary with the `Talha` object class:

```cpp
#include "BinaryTree.h"
#include "Talha.h"

// Create an instance of BinaryTree
BinaryTree<Talha> tree;

void printValue(const Talha& value) {
  Serial.print("ID: ");
  Serial.println(value.getId());
  Serial.print("Age: ");
  Serial.println(value.getAge());
  Serial.print("Name: ");
  Serial.println(value.getName());
}

void setup() {
  Serial.begin(9600);

  // Insert objects into the binary tree
  Talha t1(1, 28, "Talha");
  Talha t2(2, 41, "Hammad");
  Talha t3(3, 42, "Ali");
  Talha t4(4, 31, "Naeem");
  Talha t5(5, 33, "Umair");
  tree.insert(t1);
  tree.insert(t2);
  tree.insert(t3);
  tree.insert(t4);
  tree.insert(t5);

  // Perform a breadth-first search traversal
  Serial.println("BFS traversal:");
  tree.bfs(printValue);

  // Perform a depth-first search traversal
  Serial.println("DFS traversal:");
  tree.dfs(printValue);

  // Check if an object is present in the tree
  Talha searchObject(3, 42, "Ali");
  if (tree.Present(searchObject)) {
    Serial.println("Object found!");
    const BinaryTree<Talha>::Node* node = tree.search(searchObject);
    if (node != nullptr) {
      Serial.println("Object details:");
      printValue(node->data);
    }
  } else {
    Serial.println("Object not found!");
  }

  // Remove an object from the tree
  tree.remove(searchObject);

  // Clear the tree
  tree.clear();
}

void loop() {
  // Your code here
}
```
## Usage

...

## Library Constraints

- This library is designed to be used with Arduino boards.
- Ensure that your Arduino IDE is up to date and compatible with the library.
- The library uses C++ features, so make sure your Arduino board supports C++.
- Check the library's compatibility with your specific Arduino board model.
- Refer to the library's documentation for any additional hardware requirements or constraints.

 

 

## Author

The MyLibrary project is created and maintained by [Iot Nooob Talha ](https://github.com/iot-Noob).
