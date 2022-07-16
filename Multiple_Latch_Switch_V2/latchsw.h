#ifndef latchsw_h
#define latchsw_h
#include"Arduino.h"



class latchsw {
private:

int *btn,*bsd,*btl,index,ps,pe,tnp,top=0; 
bool *cbp;
 
public:
 
int nill();
void begin(int sp,int ep);
void read_btn();
void bt_paction();
void user_action(); 

};
#endif
