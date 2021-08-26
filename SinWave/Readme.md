> # Sinwave Generator In Arduino
> ##  By IOT Noob 

### Introduction
A sine wave is a geometric waveform that oscillates (moves up, down or side-to-side) periodically, and is defined by the function y = sin x. In other words, it is an s-shaped, smooth wave that oscillates above and below zero.
The sine wave indicator is based on the assumption that markets move in cyclical patterns. After quantifying a cycle, a trader may try to use the pattern to develop a leading indicator. This works extremely well when the market is indeed moving in a cycle. When the market is trending, however, this system fails (and one should adjust for that).
Markets alternate between periods of cycling and trending. Cyclical periods are characterized by price bouncing off support or resistance levels and failed breakouts or overshoots. Trending periods are characterized by new highs or new lows and pull backs that then continue in the direction of the trend, until exhausted.

In technical analysis, oscillators are often used that may have sine-shaped characteristics. An oscillator exists between two extreme values and then builds a trend indicator with the results. The analysts then use the trend indicator to discover short-term overbought or oversold conditions. When the value of the oscillator approaches the upper extreme value, analysts interpret that information to mean that the asset is overbought, and as it approaches the lower extreme, analysts consider the asset to be oversold.
The sampling frequency (or sample rate) is the number of samples per second in a Sound. For example: if the sampling frequency is 44100 hertz, a recording with a duration of 60 seconds will contain 2,646,000 samples. ... To get the sampling frequency of a selected Sound, click Info or choose Get sampling frequency.

### 
 
### Library defination  and implimentation

#### Set path
You can copy the entire library to **C:\Users\Admin\Documents\Arduino\libraries** 
#### Define library
In you arduino ide after you copy library to location  you can define this library by typing 
```cpp
#include<SinWave.h>
```
After this we are ready to proceed further using this library. 
 #### Basic keyword in this library
 #### 1.Start this library
You guys had idea of classes and object you have to do same here just define class and and made it object to use it further
After this you begin your sinwave library there are following  steps i will explain function of each step
 
> ##### a. Procidure no 1

```cpp
 #include <SinWave.h>
SinWave si;
 
 void setup() {
  si.begin();
 }
```
This will set default values for output pin in this example my frequancy is 2 frequancy sample are 500.0 pin of arduino is digital pin no 3 and delay for each cycle is 3.

  
 

 
#### 2. Start Main Function(Sin wave generation)

After you learn different things you need to perform in Void setup let proceed to furthre Shall we.
After Setup in main function you should write something like this
#### Default  values
```cpp
#include"SinWave.h"
SinWave sins;
void setup() {
 sins.begin();
}

void loop() {
  sins.play_pwm(true);
}
 }
```

#### Change frequancy set

```cpp
#include"SinWave.h"
SinWave sins;
void setup() {
 sins.begin(int fset); //insted of int fset type the frequancy set that generate sin wave
}

void loop() {
  sins.play_pwm(true);
}
 }
```

#### Change frequancy set and frequancy

```cpp
#include"SinWave.h"
SinWave sins;
void setup() {
 sins.begin(int fset,int freq); //insted of int fset type the frequancy set value and frequancy of that generated sin wave
}

void loop() {
  sins.play_pwm(true);
}
 }
```

#### Change frequancy set and frequancy and Delay

```cpp
#include"SinWave.h"
SinWave sins;
void setup() {
 sins.begin(int fset,int freq,int t); //insted of int fset type the frequancy set value and frequancy of that generated sin wave
}

void loop() {
  sins.play_pwm(true);
}
 }
```

#### Change frequancy set and frequancy and Delay and set custom pin

```cpp
#include"SinWave.h"
SinWave sins;
void setup() {
 sins.begin(int fset,int freq,int t,int pin); //insted of int fset type the frequancy set value and frequancy of that generated sin wave
}

void loop() {
  sins.play_pwm(true);
}
 }
```

#### Finally

Now change these values and make your own PWM Sin wave and enjoy this library 

> - [Lin 1 to learn more about this topic](https://www.youtube.com/watch?v=ojkUaCSFM30&t=1436s)
> - [Learn generate pwm](https://www.youtube.com/watch?v=zu-4aREQd94)
> - [What is sin wave](https://www.youtube.com/watch?v=98FgWHu2eI4)

# Author
##### Library created by IOT Noob 
Dated 5/11/2021

version release 1.0



