#include"SinWave.h"
SinWave sins;
void setup() {
 sins.begin(400.0,2,6,3);
}

void loop() {
  sins.play_pwm(true);
}
