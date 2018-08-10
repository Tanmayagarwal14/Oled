

#include <Wire.h>
#include "SSD1306.h"


#define SW1 2
#define SW2 3
#define SW3 8
#define SW4 7

int Switch1State,Switch2State,Switch3State,Switch4State;

int buttonState1;
int buttonState2;
int buttonState3;
int buttonState4;

int laststateswitch1;
int laststateswitch2;
int laststateswitch3;
int laststateswitch4;

long lastDebounceTime_1 =0;
long lastDebounceTime_2 =0;
long lastDebounceTime_3 =0;
long lastDebounceTime_4 =0;
long debounceDelay=50;
 
SSD1306 display(0x3d,21,22);



void setup() {

 
 display.init();
 display.flipScreenVertically();
 display.setFont(ArialMT_Plain_16);
 //display.setTextAlignment(TEXT_ALIGN_LEFT);
  
}

void loop(){
  display.clear();
  if(check_switch1() == 1){
    display.drawString(0,0,"Switch 1 pressed");  
  }
  else if(check_switch2() == 1)
    {
      display.drawString(0,0,"Switch 2 pressed");
    }
  else if(check_switch3() == 1)
    {
      display.drawString(0,0,"Switch 3 pressed");
    }
  else if(check_switch4() == 1);
    {
      display.drawString(0,0,"Switch 4 pressed");
    }
  
  display.display();
 
  }

int check_switch1()
{
    Switch1State=digitalRead(SW1);
    
    if(Switch1State!=laststateswitch1)
  {
    lastDebounceTime_1=millis();
  }

    laststateswitch1=Switch1State;
  
    if((millis()-lastDebounceTime_1) > debounceDelay)
  {
    if (Switch1State != buttonState1) {
      buttonState1 = Switch1State;

   
      if (buttonState1 == HIGH) {
   
   return 1;     
      }
    }
  }
    
    return 0;
}


int check_switch2()
{
    Switch2State=digitalRead(SW2);
    
    if(Switch2State!=laststateswitch2)
  {
    lastDebounceTime_2=millis();
  }

  laststateswitch2=Switch2State;
  
    if((millis()-lastDebounceTime_2) > debounceDelay)
  {
    if (Switch2State != buttonState2) {
      buttonState2 = Switch2State;

   
      if (buttonState2 == HIGH) {
   
   return 1;     
      }
    }
  }
    
    return 0;
}

int check_switch3()
{
    Switch3State=digitalRead(SW3);
    
    if(Switch3State!=laststateswitch3)
  {
    lastDebounceTime_3=millis();
  }

  laststateswitch3=Switch3State;
  
    if((millis()-lastDebounceTime_3) > debounceDelay)
  {
    if (Switch3State != buttonState3) {
      buttonState3 = Switch3State;

      
      if (buttonState3 == HIGH) {
   return 1;     
      }
    }
  }
    
    return 0;
}

int check_switch4()
{
    Switch4State=digitalRead(SW4);
    
    if(Switch4State!=laststateswitch4)
  {
    lastDebounceTime_4=millis();
  }

  laststateswitch4=Switch4State;
  
    if((millis()-lastDebounceTime_4) > debounceDelay)
  {
    if (Switch4State != buttonState4) {
      buttonState4 = Switch4State;

   
      if (buttonState4 == HIGH) {
   
   return 1;     
      }
    }
  }
    
    return 0;
}

