# What is linklist
Linked lists are among the simplest and most common data structures. They can be used to implement several other common abstract data types, including lists, stacks, queues, associative arrays, and S-expressions, though it is not uncommon to implement those data structures directly without using a linked list as the basis.

The principal benefit of a linked list over a conventional array is that the list elements can be easily inserted or removed without reallocation or reorganization of the entire structure because the data items need not be stored contiguously in memory or on disk, while restructuring an array at run-time is a much more expensive operation. Linked lists allow insertion and removal of nodes at any point in the list, and allow doing so with a constant number of operations by keeping the link previous to the link being added or removed in memory during list traversal.

On the other hand, since simple linked lists by themselves do not allow random access to the data or any form of efficient indexing, many basic operations—such as obtaining the last node of the list, finding a node that contains a given datum, or locating the place where a new node should be inserted—may require iterating through most or all of the list elements. The advantages and disadvantages of using linked lists are given below. Linked lists are dynamic, so the length of a linked list can increase or decrease as necessary. Each node does not necessarily follow the previous one physically in the memory.

## Use

 
copy your header file to C:\Users\Admin\Documents\Arduino\libraries
```c++
include linklist by #include<linklist.h>
create a object by linklist la;
 
int setup begin the linklist by typing lnklist.begin();

la.add_node(int num); //this allow yu to add number from beginning of your node of head of node is null;
la.show_node(bool a); // this allow you to show all values stored in nodes and return those values as well do you can store them in a integer datatype as this allow only integer datatype to be stored in your linklist;
if a=true then it show result to screen othervise it just return tose values;
la.search_node(1,true); //this allow you to search node in your linkist and return those values so you can sotre it outside in seprate integer datatype
```
 # Links to get more information about topic
Links where you can learn more about the topic i added a pdf of that topic as well 
- https://www.bitdegree.org/learn/linked-list-c-plus-plus#:~:text=There%20are%20two%20types%20of,part%20and%20the%20next%20part.
- https://www.geeksforgeeks.org/data-structures/linked-list/
- https://www.tutorialspoint.com/cplusplus-program-to-implement-singly-linked-list

# Author 
Created by IOT Noob 06/07/2021 V1
