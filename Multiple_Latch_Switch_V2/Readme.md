# Arduino Latch Switch
## _Easy latch switch library_
##### _Version 2.0 BY IoT Noob_ 
This library alllow user to utlise arduino pins as a latch switch a switch that remmeber current state of a pushbutton.
This library is easy to use and no need to write all algorihms and code from scratch just include library in your current 
project.
this is version 2 of this library as i am working on development for this library.

- Library path and folder
### copy the file to 
```bat
C:\Users\Admin\Documents\Arduino\libraries
```
1. Include the library in yor main arduino project

```c++
 #include <latchsw.h>
```
This tells the compiler of current library you want to use i.e. Latch switch.
### Initilize the code
In your ``` void begin()``` part of of arduino you should initilise the library.
```c++
ls.begin(2,5); //start the script begin with 2,5 mean pin 2 is starting and 5 is ending pin
```
Here  ``` 2,5``` are pin define as input for button remmeber to use proper schematic and a pulldown resistor with pins connectring from arduino to button as show in schematic below.

![Schematics](https://github.com/iot-Noob/Arduino-Library/blob/main/Multiple_Latch_Switch_V2/examples/Schematic.png)

### Read current button status
```c++
void read_btn();
```
A Function use to read current status of button defined by user.
```void read_btn();``` Is function that read status of bttoon you declare in your ```void setup()``` .

## Main function
Within your main fnction you need to call  this function ```bt_paction();``` that tells the library to read current pin and check the status  of arduino pin.

```c++
void loop() {
 
bt_paction(); //check button is pressed

}
```

## User define function
As name suggest latch switch, a switch remember its current state same goes for this piece of code.
after button is pressed the action or outcome you want for library to perform 

```c++
void latchsw::user_action();
```
This function is declared outside the class of my library inside this function you need to add stuff you want to perform after the button is pressed.
Remember to declare ```void latchsw::user_action(){}``` in main othervise code wont work. 
#### Things to remember
1. ```index``` store the current index of button pressed.
2. ```cbp``` Store the current position of which  buton is  press remember its an array pointer and set the size of it according to number of pin you define in ```void setup();```
3. ```btl``` Store the state of current buton press remember its an array pointer and set the size of it according to number of pin you define in it store the latch status of button you define in ```void setup()```
4. ```tnp``` count of total number of pins you declare in beginning.
 
All the tings mention above are only useable insede ```void latchsw::user_action();``` finction

### Example.
```c++
#include <latchsw.h>

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
```
#### Created by IoT Noob 
#### _V2.0_



