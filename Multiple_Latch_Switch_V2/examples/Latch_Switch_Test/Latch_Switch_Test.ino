#include "latchsw.h"

latchsw ls;
const int led=13;
int a;
void latchsw::user_action() { // when button is pressed and released action took place
 //index this datatype is used inside this function only tel which button is pressed
 //cbp **store the status of current button pressed
 //btl latch switch tore current status wether button is on or off 1 on 0 mean off
 //ps starting pin
 //pe ending pin number
 //tnp variable hold total number of pins
//each pin you define store in array 
 if(index==0) {
  if(btl[index]==0){
     digitalWrite(led,LOW);
  }
   if(btl[index]==1){
     digitalWrite(led,HIGH);
  }
  
 }
  if(index==1) {
    if(btl[index]==1){

    if(btl[0]==1) {
        btl[0]=0;
           
    }
  }
   
 }
  if(index==2) {
  
 }
  if(index==3) {
  
 }
}


void setup() {
ls.begin(2,5); //start the script begin with 2,5 mean pin 2 is starting and 5 is ending pin
pinMode(led,OUTPUT);

 
}

 
 
void loop() {
 
ls.bt_paction(); //check button is pressed

}
