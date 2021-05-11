#ifndef SinWave_h
#define SinWave_h
#include"Arduino.h"

class SinWave {
private:
int sig[500]; // to store signal
float fs=500.0; //frequancy sample
int f=2; //frequancy
float t;
int outpin=3;
long int del=2;
public:

void begin();

void begin(int fset);

void begin(int fset,int freq);
   
void begin(int fset,int freq,int t);

void begin(int fset,int freq,int t,int pin);
 

int play_pwm(bool sv);

 
   
};

#endif
