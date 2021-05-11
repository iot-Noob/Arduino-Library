#include"Arduino.h"
#include"SinWave.h"

 void SinWave::begin() {
Serial.begin(9600);
pinMode (outpin, OUTPUT) ;
// generate sin signal
for(int i = 0; i<500; i++)
{
t = (float)i/fs;
sig[i] = (int) (127.0*(sin(2*3.14*f*t)+1.0));
} 
 }


void SinWave:: begin(int fset) {
  fs=fset;
 Serial.begin(9600);
pinMode (outpin, OUTPUT) ;
// generate sin signal
for(int i = 0; i<500; i++)
{
t = (float)i/fs;
sig[i] = (int) (127.0*(sin(2*3.14*f*t)+1.0));
}  
}

void SinWave::begin(int fset,int freq){
   fs=fset;
   f=freq;
 Serial.begin(9600);
pinMode (outpin, OUTPUT) ;
// generate sin signal
for(int i = 0; i<500; i++)
{
t = (float)i/fs;
sig[i] = (int) (127.0*(sin(2*3.14*f*t)+1.0));
} 
}
   
void SinWave::begin(int fset,int freq,int tim){
   fs=fset;
   f=freq;
   del=tim;
 Serial.begin(9600);
pinMode (outpin, OUTPUT) ;
// generate sin signal
for(int i = 0; i<500; i++)
{
t = (float)i/fs;
sig[i] = (int) (127.0*(sin(2*3.14*f*t)+1.0));
}
}

void SinWave::begin(int fset,int freq,int tim,int pin) {
    fs=fset;
   f=freq;
   del=tim;
   outpin=pin;
 Serial.begin(9600);
pinMode (outpin, OUTPUT) ;
// generate sin signal
for(int i = 0; i<500; i++)
{
t = (float)i/fs;
sig[i] = (int) (127.0*(sin(2*3.14*f*t)+1.0));
} 
}



int SinWave::play_pwm(bool sv) {
if(sv==true) {
   for(int i = 0; i<500; i++){
 analogWrite(3,sig[i]);
 Serial.println(sig[i]);

 delay(del);
   }
}else {
 for(int i = 0; i<500; i++){
 analogWrite(3,sig[i]);
 

 delay(del);
   }
}
}
  
