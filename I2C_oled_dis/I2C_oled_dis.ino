

#include <Wire.h>
#include "SSD1306.h"
 
SSD1306 display(0x3d,21,22);
int counter =0;


void setup() {

 
 display.init();
 display.flipScreenVertically();
 display.setFont(ArialMT_Plain_16);
 //display.setTextAlignment(TEXT_ALIGN_LEFT);
  
}

void loop(){
  display.clear();
  display.drawString(0,0,"Counter: " + String(counter));
  display.display();
  counter ++;
  delay(2000);
 
  }
