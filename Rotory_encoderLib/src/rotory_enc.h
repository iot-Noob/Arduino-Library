#ifndef rotory_enc_h

#define rotory_enc_h

class RotoryEncoder {
  
private:
int  CLK ,DT ,SW,counter = 0,currentStateCLK,lastStateCLK;
String currentDir ="";
unsigned long lastButtonPress = 0;
bool slog=false,ip=false;
public:  

void begin(bool g);
 

void begin(int clk,int dt,int sw,bool ad);

void beginRoter();
int GetRoterCounter();

bool  GetButtonStatus();
String GetRotorPosition();

int GetRotorCurrentState();

int GetRotorLastState();
};









#endif
