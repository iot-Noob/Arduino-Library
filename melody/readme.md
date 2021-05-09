# Arduino Tone music 
##  By IOT Noob 

### introduction
This library help you to make music tones in aruino uno or any other version of arduino using tone();  default beep generator of arduino i define Pitch of each tone of piano key in my library of each piano scale that help to make tones in reallife if you had a little knowledge about music theory or a musician on intermediate level. Arduino doesnot suppport polyphonic melody you because of its limited memory but you can save 3 4 seconds 8 bit audio in your arduino as well. Thats not for this topic now. This library had 8 octives lie between octive 2 to 8 from C2 of piano scale to C8 along with sharps of each notes like in piano scale.

### 
 
### Library defination and tone composition
#### Define library
In you arduino ide you can define this library by typing 
```cpp
#include<melody.h>
```
now you can access the members of this library and ready to compose your own beep music. 
#### Getting started with tone composition

##### How to play a melody.
Each note is defined by its spesific key note but here you get started with. first include library and define spkeaker pin you can use arduino's analog as well as digital pin to get tone otput through your speaker.
```cpp
#include<melody.h>
const int speaker_pin=2; //use digital pin 2 of arduino as speaker output
void setup() {
    
}

void loop() {
tone(speaker_pin,e5,550);    //Speaker pin is output ,e5 is the tone note i wanted to play 550 is sustain time you need this tone to be played
delay(470); //470 is best delay its a pause between notes 470 good for me you can change that
tone(speaker_pin,g5,550);

}

```
#### Note Keywords
- c2 define c note of second octive of piano
- cs2 define c# note of second octive of piano
- e5 define E note of second octive of piano and so on
- sharps are defien by **'s'** in end e.g. **cs2,gs2**  and white key by its name

## Octive defination
```cpp
 //octive 2

#define c2 65   //c2
#define cs2 69  //c#2
#define d2  73  //d2
#define ds2 77  //d#2
#define e2 82 //e2
#define f2 87 //f2
#define fs2 92  //f#2
#define g2 98 //g2
#define gs2 103 //g#2
#define a2 110  //a2
#define as2 116 //a#2
#define b2 123  //b2

//octive 3

#define c3 130
#define cs3 180 
#define d3  146
#define ds3 155
#define e3 164
#define f3 174
#define fs3 185
#define g3 196
#define gs3 207
#define a3 220
#define as3 233
#define b3 246    
//octive 4
#define c4 261
#define cs4 277 
#define d4  293
#define ds4 311
#define e4 329
#define f4 349
#define fs4 369
#define g4 392
#define gs4 415
#define a4 440
#define as4 466
#define b4 493 
//octive 5
#define c5 523.25
#define cs5 554
#define d5  587
#define ds5 622
#define e5 659
#define f5 698
#define fs5 739
#define g5  783
#define gs5 830
#define a5 880
#define as5 932
#define b5 987 
//octive 6
#define c6 1046
#define cs6 1108
#define d6  1174
#define ds6 1244
#define e6 1318
#define f6 1396
#define fs6 1479
#define g6  1567
#define gs6 1661
#define a6 1760
#define as6 1864
#define b6 1975 
//octive 7
#define c7 2093
#define cs7 2217
#define d7  2349
#define ds7 2489
#define e7 2637
#define f7 2793
#define fs7 2959
#define g7  3135
#define gs7 3322
#define a7 3520
#define as7 3729
#define b7 3951 
//octive 8
#define c8 4186
#define cs8 4434
#define d8  4698
#define ds8 4978
#define e8 5274
#define f8 5587
#define fs8 5919
#define g8  6271
#define gs8 6644
#define a8 7040
#define as8 7458
#define b8 7902
```

# In the end
Hope you guys learn something new and compose tunes on arduino 
> - [Coffin dance ](https://www.reddit.com/r/arduino/comments/iwb5a7/coffin_dance_audrino/?utm_source=share&utm_medium=web2x&context=3)
> - [Macintosh startup tune](https://www.reddit.com/r/arduino/comments/iy8u9j/old_macintosh_pc_startup_arduino/?utm_source=share&utm_medium=web2x&context=3)

made tunes and share it 

## Author  
Iot Noob Develop date 2020 
V1,0




