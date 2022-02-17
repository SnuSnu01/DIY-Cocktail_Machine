// a code to opperate our DIY-Cocktail machine
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


// Including the display_API.h
#include "display_API.h"

//Including the main_API.h
#include "main_API.h"


void setup() {
  Serial.begin(115200);
  displayInit();
  pinInit();
}

void loop() {
  display_run();
}
