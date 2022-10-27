/*
-----------------------------------------------------
  Created by @b4iterdev from STEMIST with love <3
  All rights reserved.
-----------------------------------------------------
*/
#include <Arduino.h>

//Assign pins as follow
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11
#define led11 12
#define led12 13
#define led13 A1
#define led14 A2
#define led15 A3

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
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led13,OUTPUT);
  pinMode(led14,OUTPUT);
  pinMode(led15,OUTPUT);
  Serial.begin(9600);
  while (! Serial); 
  Serial.println("Nhap so den led tu 0 den 9 hoac 'x' de tat");
}

void clearAll() {
  for (int i=1;i<=13;i++) {
    digitalWrite(i,0);
  }
  digitalWrite(led13,0);
  digitalWrite(led14,0);
  digitalWrite(led15,0);
}

void loop() {
  if (Serial.available())
  {
    char input = Serial.read();
    switch(input) {
    case '0':
      clearAll();
      digitalWrite()
      break;
    case '1':
      clearAll();
      break;
    case '2':
      clearAll();
      break;
    case '3':
      clearAll();
      break;
    case '4':
      clearAll();
      break;
    case '5':
      clearAll();
      break;
    case '6':
      clearAll();
      break;
    case 'x':
      clearAll();
      break;
    }
  }
}