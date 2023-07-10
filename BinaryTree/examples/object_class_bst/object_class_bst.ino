#include<BinaryTree.h>

class Talha{
private:

int id,age;
String name;
public:

 Talha(){}
 Talha(int i,int a,String n){
  id=i;
  name=n;
  age=a;
 }

int getId() const {
  return id;
}

int getAge() const {
  return age;
}

String getName() const {
  return name;
}


bool operator<(const Talha& other) const {
  if (id < other.id)
    return true;
  else if (id == other.id) {
    if (age < other.age)
      return true;
    else if (age == other.age)
      return name < other.name;
  }
  return false;
}

bool operator>(const Talha& other) const {
  if (id > other.id)
    return true;
  else if (id == other.id) {
    if (age > other.age)
      return true;
    else if (age == other.age)
      return name > other.name;
  }
  return false;
}

bool operator==(const Talha& other) const {
  return (id == other.id) && (age == other.age) && (name == other.name);
}
};
void printValue(const Talha& value) {
  Serial.print(value.getId());
  Serial.print(value.getAge());
  Serial.println(value.getName());
}
 
void setup(){
  BinaryTree <Talha> bt;
  Serial.begin(9600);
  Talha t1(1,28,"Talha");
  Talha t2(2,41,"Hammad");
  Talha t3(3,42,"Ali");
  Talha t4(4,31,"Naeem");
  Talha t5(5,33,"Umair");
  bt.insert(t1);
   bt.insert(t2);
      bt.insert(t3);
         bt.insert(t4);
            bt.insert(t5);
            Serial.println("BFS");
     bt.bfs(printValue);
  // Outputs: 5 3 8 2 4 6 9
Serial.println("BFS");
   bt.dfs(printValue);
  // Outputs: 5 3 2 4 8 6 9

  if (bt.Present(t3)) {
    Serial.println("Found!");
   printValue(bt.search(t3)->data);
  } else {
    Serial.println("Not found!");
  }

  bt.remove(t3);
  Serial.println("BFS after removel t3 object");
     bt.bfs(printValue);
}

void loop(){

  
}

 
