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


 # 1. Flaws




