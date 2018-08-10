
#include <Wire.h>
#include "SSD1306.h"

#define SW1 0
#define SW2 2
#define SW3 8
#define SW4 7

int a,b,c,d;
void setup()
{

  pinMode(SW1,INPUT_PULLUP);
  pinMode(SW2,INPUT_PULLUP);
  pinMode(SW3,INPUT_PULLUP);
  pinMode(SW4,INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop()
{
  delay(1000);
  a=digitalRead(SW3);
  Serial.println("Value of a is: " + String(a));
   delay(1000);
  b=digitalRead(SW2);
  Serial.println("Value of b is: " + String(b));
  delay(1000);
  c=digitalRead(SW3);
  Serial.println("Value of c is: " + String(c));
  delay(1000);
  d=digitalRead(SW4);
  Serial.println("Value of d is: " + String(d));
  delay(1000);
}

