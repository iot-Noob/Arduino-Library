#include"Arduino.h"
#include"rotory_enc.h"

void RotoryEncoder::begin(bool g) {
  CLK=2;
DT=3;
SW=4;  
slog=g;
  // Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(SW, INPUT_PULLUP);
  Serial.begin(9600);
     // Read the initial state of CLK
  lastStateCLK = digitalRead(CLK);
}

void RotoryEncoder::begin(int clk,int dt,int sw,bool ad) {
 CLK=clk;
DT=dt;
SW=sw;  
slog=ad;
  // Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(SW, INPUT_PULLUP);
   
     // Read the initial state of CLK
  lastStateCLK = digitalRead(CLK);
 Serial.begin(9600); 
}

void RotoryEncoder::beginRoter() {
   // Read the current state of CLK
  currentStateCLK = digitalRead(CLK);

  // If last and current state of CLK are different, then pulse occurred
  // React to only 1 state change to avoid double count
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){

    // If the DT state is different than the CLK state then
    // the encoder is rotating CCW so decrement
    if (digitalRead(DT) != currentStateCLK) {
      counter --;
      currentDir ="CCW";
    } else {
      // Encoder is rotating CW so increment
      counter ++;
      currentDir ="CW";
    }
if(slog==true) {
  
    Serial.print("Direction: ");
    Serial.print(currentDir);
    Serial.print(" | Counter: ");
    Serial.println(counter);
}
  }

  // Remember last CLK state
  lastStateCLK = currentStateCLK;

  // Read the button state
  int btnState = digitalRead(SW);

  //If we detect LOW signal, button is pressed
  if (btnState == LOW) {
    //if 50ms have passed since last LOW pulse, it means that the
    //button has been pressed, released and pressed again
    if (millis() - lastButtonPress > 50) {
      if(slog==true) {
        Serial.println("Button pressed!");
      }
      ip=true;
    }else {
      ip=false;
    }

    // Remember last button press event
    lastButtonPress = millis();
  }

  // Put in a slight delay to help debounce the reading
  delay(1); 
}


int RotoryEncoder::GetRoterCounter() {
   return counter; 
}

bool  RotoryEncoder::GetButtonStatus() {
   return ip; 
}

String RotoryEncoder::GetRotorPosition() {
   return currentDir;
}

int RotoryEncoder::GetRotorLastState() {
   return lastStateCLK; 
}
int RotoryEncoder::GetRotorCurrentState() {
   return currentStateCLK; 
}
