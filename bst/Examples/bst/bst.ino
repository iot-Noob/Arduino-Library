#include"bst.h"
BST gsd;
String a;
void setup() {
  Serial.begin(9600);
gsd.insert("lol");
gsd.insert("Hacker");
gsd.insert("Amna");
gsd.insert("Haider");
gsd.display();
gsd.remove("Haider");
gsd.display();

}

void loop() {
  // put your main code here, to run repeatedly:

}
