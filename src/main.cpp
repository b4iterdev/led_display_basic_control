/*
-----------------------------------------------------
  Created by @b4iterdev from STEMIST with love <3
  All rights reserved.
-----------------------------------------------------
*/
#include <Arduino.h>

//Assign pins as follow
int led1 = 2,led2 = 3,led3 = 4,led4 = 5,led5 = 6,led6 = 7,led7 = 8; 
bool ledStat1 = 0,ledStat2 = 0,ledStat3 = 0,ledStat4 = 0,ledStat5 = 0,ledStat6 = 0,ledStat7  = 0;

void setup() 
{
  //Configure pinMode as follow.
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  Serial.begin(9600);
  while (! Serial); 
  Serial.println("Nhap so den led tu 0 den 6 hoac 'x' de tat");
}

bool switchToggle(bool toToggle) {
  //This funtion will funtion like a toggle boolean value between 0 and 1.
  if (toToggle == 0)
  {
    toToggle = 1;
  } else {
    toToggle = 0;
  }
  return toToggle;
}

void switchLED(bool status, int led) {
  //This funtion will toggle the LED on execution.
 if (status == 1)
 {
  digitalWrite(led,1);
 } else {
  digitalWrite(led,0);
 }
}

void loop() {
  if (Serial.available())
  {
    char input = Serial.read();
    switch(input) {
    case '0':
      ledStat1 = switchToggle(ledStat1);
      switchLED(ledStat1,led1);
      break;
    case '1':
      ledStat2 = switchToggle(ledStat2);
      switchLED(ledStat2,led2);
      break;
    case '2':
      ledStat3 = switchToggle(ledStat3);
      switchLED(ledStat3,led3);
      break;
    case '3':
      ledStat4 = switchToggle(ledStat4);
      switchLED(ledStat4,led4);
      break;
    case '4':
      ledStat5 = switchToggle(ledStat5);
      switchLED(ledStat5,led5);
      break;
    case '5':
      ledStat6 = switchToggle(ledStat6);
      switchLED(ledStat6,led6);
      break;
    case '6':
      ledStat7 = switchToggle(ledStat7);
      switchLED(ledStat7,led7);
      break;
    case 'x':
      ledStat1 = 0,ledStat2 = 0,ledStat3 = 0,ledStat4 = 0,ledStat5 = 0,ledStat6 = 0,ledStat7  = 0;
      switchLED(ledStat1,led1);
      switchLED(ledStat2,led2);
      switchLED(ledStat3,led3);
      switchLED(ledStat4,led4);
      switchLED(ledStat5,led5);
      switchLED(ledStat6,led6);
      switchLED(ledStat7,led7);
      break;
    }
  }
}