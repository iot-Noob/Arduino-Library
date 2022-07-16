#include"Arduino.h"
#include"latchsw.h"

int latchsw::nill() {
 return 0; 
}

 
void latchsw::begin(int sp,int ep) {
ps=sp;
pe=ep;
Serial.begin(9600); 
 
 for(int i=ps;i<=pe;i++) {

  
  Serial.print("Created new pin no  ");
    Serial.print(i);
    Serial.println();
  tnp++;   
 }
 Serial.print("Total no of pin= ");
 Serial.print(tnp);
 bsd =new int[tnp]; 
 btl =new int[tnp];
 btn =new int[tnp]; 
 cbp=new bool[tnp];
for(int i=0;i<=tnp-1;i++) {
  Serial.println();



 bsd[i]=0;  
   

 btn[i]=ps;
 pinMode( btn[i],INPUT);
 ps++;
 Serial.print(i);
 Serial.print(":) Setting pin as input pin no ");
 Serial.print(btn[i]);
 Serial.println();
}
 

 
}



void latchsw::read_btn() {

for(int i=0;i<=tnp-1;i++) {
cbp[i]=digitalRead(btn[i]);
}
}
 

void latchsw::bt_paction() {

for(int i=0;i<=tnp-1;i++) {
   read_btn();
 while(cbp[i]!=bsd[i]) {
  read_btn();
  if(cbp[i]==1) {
 nill();
  }else {
    index=i;
    if(btl[i]>=1) {
      btl[i]=0;
    }else {
      btl[i]++;
    }
    Serial.println();
    Serial.print("Button ");
    Serial.print(i);
    Serial.print(" Was pressed up!!");
    Serial.println();
    Serial.print(" Button "+i);
    Serial.print(" status= ");
    Serial.print(btl[i]);
    Serial.println();
    user_action();
    nill();
  }
  
 }
delay(33);
 bsd[i]=cbp[i];
}
  
}
 
