// a code to opperate our DIY-Cocktail machine
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


// Including the display_API.h
#include "display_API.h"


void setup() {
  /*pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);*/
  pinInit();
  Serial.begin(115200);
  displayInit();
  
}

void loop() {
  display_run();
}
