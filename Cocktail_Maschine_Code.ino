// a code to opperate our DIY-Cocktail machine
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


// Including the display_API.h
#include "display_API.h"


void setup() {
  pinInit();
  Serial.begin(115200);
  displayInit();
  
}

void loop() {
  display_run();
}
