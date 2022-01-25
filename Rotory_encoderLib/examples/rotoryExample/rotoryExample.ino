#include"rotory_enc.h"
RotoryEncoder r1;

void setup() {
 Serial.begin(9600); 
r1.begin(7,8,9,false);

}


void loop() {
  r1.beginRoter();
  
}
