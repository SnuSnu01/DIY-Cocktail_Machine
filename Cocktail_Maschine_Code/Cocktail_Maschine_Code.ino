// a code to opperate our DIY-Cocktail machine
// Author :
// Date   : 17.02.2022
// Version: 0.1.0


// Including the display_API.h
#include "display_API.h"


void setup() {
  pinInit();
  Serial.begin(115200);
  displayInit();

}

void loop() {
  display_run();

  if(machePump1){
    machePump1 = false;
    Pump1();
  }

  if(machePump2){
    machePump2 = false;
    Pump2();
  }

  if(machePump3){
    machePump3 = false;
    Pump3();
  }

  if(machePump4){
    machePump4 = false;
    Pump4();
  }

  if(machePump5){
    machePump5 = false;
    Pump5();
  }

  if(machePump6){
    machePump6 = false;
    Pump6();
  }

  if(machePump7){
    machePump7 = false;
    Pump7();
  }

  if(machePump8){
    machePump8 = false;
    Pump8();
  }
  
  if (macheLongIsland) {
    macheLongIsland = false;
    LongIsland();
  }

  if (macheSexOnTheBeach) {
    macheSexOnTheBeach = false;
    SexOnTheBeach();
  }

  if (macheCubaLibre) {
    macheCubaLibre = false;
    CubaLibre();
  }

  if (macheCranberryVodka) {
    macheCranberryVodka = false;
    CranberryVodka();
  }

  if (macheScrewdriver) {
    macheScrewdriver = false;
    Screwdriver();
  }

  if (macheBlueLady) {
    macheBlueLady = false;
    BlueLady();
  }

  if (macheBlackThunder) {
    macheBlackThunder = false;
    BlackThunder();
  }

  if (macheKickItIn) {
    macheKickItIn = false;
    KickItIn();
  }

  if (macheAquaVelva) {
    macheAquaVelva = false;
    AquaVelva();
  }

  if (macheSapphireMadras) {
    macheSapphireMadras = false;
    SapphireMadras();
  }

  if (macheGreenWidow) {
    macheGreenWidow = false;
    GreenWidow();
  }

  if (macheGreenEyes) {
    macheGreenEyes = false;
    GreenEyes();
  }

  if (macheGreenDevil) {
    macheGreenDevil = false;
    GreenDevil();
  }

  if (macheGinJuice) {
    macheGinJuice = false;
    GinJuice();
  }

  if (macheSoftPoison) {
    macheSoftPoison = false;
    SoftPoison();
  }
}
