#include"linklist.h"
linklist ll;
void setup() {
ll.begin(); //begin linkk list
ll.add_node(22);//22 added to head if nodes are empty othervise it create a new node and add it there
ll.show_node(true); //show all nodes if true show on serial else show return values
ll.search_node(22,true);//search value and return if true show result to serial monitor
ll.delete_node(1);//delete value at  location present in your linklist;
ll.Insert_node(12,1);//insert value at specfic position 
}

void loop() {
  // put your main code here, to run repeatedly:

}
