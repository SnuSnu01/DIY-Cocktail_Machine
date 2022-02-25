// API for the Display defenitions etc.
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


// Including the Nextion-Library
#include "Nextion.h"

//Including the main_API.h
#include "main_API.h"

// Initialization of the SoftwareSerial
#define DEFAULT_RXPin 12
#define DEFAULT_TXPin 13
SoftwareSerial HMISerial(DEFAULT_RXPin, DEFAULT_TXPin);


// Declaring the buttons
// Typ     <name>        =  typ      (<page-Nr>, <objekt-id>, "<name>"          );
NexButton b0             =  NexButton(   21,          2,      "pumpe1"          );
NexButton b1             =  NexButton(   21,          3,      "pumpe2"          );
NexButton b2             =  NexButton(   21,          4,      "pumpe3"          );
NexButton b3             =  NexButton(   21,          5,      "pumpe4"          );
NexButton b4             =  NexButton(   21,          6,      "pumpe5"          );
NexButton b5             =  NexButton(   21,          7,      "pumpe6"          );
NexButton b6             =  NexButton(   21,          8,      "pumpe7"          );
NexButton b7             =  NexButton(   21,          9,      "pumpe8"          );

NexButton m_longisland   =  NexButton(    4,          3,      "m_longisland"    );
NexButton m_sotb         =  NexButton(    5,          2,      "m_sotb"          );
NexButton m_cubalibre    =  NexButton(    6,          2,      "m_cubalibre"     );
NexButton m_cranberry    =  NexButton(    7,          2,      "m_cranberry"     );
NexButton m_screwdriver  =  NexButton(    8,          2,      "m_screwdriver"   );
NexButton m_bluelady     =  NexButton(    9,          2,      "m_bluelady"      );
NexButton m_blackthunder =  NexButton(   10,          2,      "m_blackthunder"  );
NexButton m_kickitin     =  NexButton(   11,          2,      "m_kickitin"      );
NexButton m_aquavelva    =  NexButton(   12,          2,      "m_aquavelva"     );
NexButton m_sapphire     =  NexButton(   13,          2,      "m_sapphire"      );
NexButton m_greenwidow   =  NexButton(   14,          2,      "m_greenwidow"    );
NexButton m_greeneyes    =  NexButton(   15,          2,      "m_greeneyes"     );
NexButton m_greendevil   =  NexButton(   16,          2,      "m_greendevil"    );
NexButton m_ginjuice     =  NexButton(   17,          2,      "m_ginjuice"      );
NexButton m_softpoison   =  NexButton(   18,          2,      "m_softpoison"    );

NexPage page0 = NexPage(0, 0, "startscreen");
NexPage page1 = NexPage(1, 0, "ausw_seite_1");
NexPage page2 = NexPage(2, 0, "ausw_seite_2");
NexPage page3 = NexPage(3, 0, "ausw_seite_3");
NexPage page19 = NexPage(19, 0, "ladescreen");

// Declaring the objects of the listener
// Declare only those who report something back
NexTouch *nex_listen_list[] = {
  &m_longisland,
  &m_sotb,
  &m_cubalibre,
  &m_cranberry,
  &m_screwdriver,
  &m_bluelady,
  &m_blackthunder,
  &m_kickitin,
  &m_aquavelva,
  &m_sapphire,
  &m_greenwidow,
  &m_greeneyes,
  &m_greendevil,
  &m_ginjuice,
  &m_softpoison,
  &b0,
  &b1,
  &b2,
  &b3,
  &b4,
  &b5,
  &b6,
  &b7,
  NULL
};


//Query whether a prompt is coming from the display
void display_run() {
  nexLoop(nex_listen_list);
}


//************************************************
//* here are the events when a button is pressed *
//************************************************
void b0PopCallback(void *ptr) {
  Pump1();
}

void b1PopCallback(void *ptr) {
  Pump2();
}

void b2PopCallback(void *ptr) {
  Pump3();
}

void b3PopCallback(void *ptr) {
  Pump4();
}

void b4PopCallback(void *ptr) {
  Pump5();
}

void b5PopCallback(void *ptr) {
  Pump6();
}

void b6PopCallback(void *ptr) {
  Pump7();
}

void b7PopCallback(void *ptr) {
  Pump8();
}

void m_longislandPopCallback(void *ptr) {
  page19.show();
  delay(500);
  LongIsland();
  delay(500);
  page1.show();
}

void m_sotbPopCallback(void *ptr) {
  page19.show();
  delay(500);
  SexOnTheBeach();
  delay(500);
  page1.show(); 
}

void m_cubalibrePopCallback(void *ptr) {
  page19.show();
  delay(500);
  CubaLibre();
  delay(500);
  page1.show();  
}

void m_cranberryPopCallback(void *ptr) {
  page19.show();
  delay(500);
  CranberryVodka();
  delay(500);
  page1.show();  
}

void m_screwdriverPopCallback(void *ptr) {
  page19.show();
  delay(500);
  Screwdriver();
  delay(500);
  page1.show();  
}

void m_blueladyPopCallback(void *ptr) {
  page19.show();
  delay(500);
  BlueLady();
  delay(500);
  page1.show(); 
}

void m_blackthunderPopCallback(void *ptr) {
  page19.show();
  delay(500);
  BlackThunder();
  delay(500);
  page2.show();
}

void m_kickitinPopCallback(void *ptr) {
  page19.show();
  delay(500);
  KickItIn();
  delay(500);
  page2.show(); 
}

void m_aquavelvaPopCallback(void *ptr) {
  page19.show();
  delay(500);
  AquaVelva();
  delay(500);
  page2.show();
}

void m_sapphirePopCallback(void *ptr) {
  page19.show();
  delay(500);
  SapphireMadras();
  delay(500);
  page2.show();
}

void m_greenwidowPopCallback(void *ptr) {
  page19.show();
  delay(500);
  GreenWidow();
  delay(500);
  page2.show();  
}

void m_greeneyesPopCallback(void *ptr) {
  page19.show();
  delay(500);
  GreenEyes();
  delay(500);
  page2.show();  
}

void m_greendevilPopCallback(void *ptr) {
  page19.show();
  delay(500);
  GreenDevil();
  delay(500);
  page3.show();
}

void m_ginjuicePopCallback(void *ptr) {
  page19.show();
  delay(500);
  GinJuice();
  delay(500);
  page3.show();
}

void m_softpoisonPopCallback(void *ptr) {
  page19.show();
  delay(500);
  SoftPoison();
  delay(500);
  page3.show(); 
}

//************************************************
//* Here the display is initialized              *
//************************************************
void displayInit() {
  nexInit();

  b0.attachPop(b0PopCallback);
  b1.attachPop(b1PopCallback);
  b2.attachPop(b2PopCallback);
  b3.attachPop(b3PopCallback);
  b4.attachPop(b4PopCallback);
  b5.attachPop(b5PopCallback);
  b6.attachPop(b6PopCallback);
  b7.attachPop(b7PopCallback);
  
  
  m_longisland.attachPop(m_longislandPopCallback);
  m_sotb.attachPop(m_sotbPopCallback);
  m_cubalibre.attachPop(m_cubalibrePopCallback);
  m_cranberry.attachPop(m_cranberryPopCallback);
  m_screwdriver.attachPop(m_screwdriverPopCallback);
  m_bluelady.attachPop(m_blueladyPopCallback);
  m_blackthunder.attachPop(m_blackthunderPopCallback);
  m_kickitin.attachPop(m_kickitinPopCallback);
  m_aquavelva.attachPop(m_aquavelvaPopCallback);
  m_sapphire.attachPop(m_sapphirePopCallback);
  m_greenwidow.attachPop(m_greenwidowPopCallback);
  m_greeneyes.attachPop(m_greeneyesPopCallback);
  m_greendevil.attachPop(m_greendevilPopCallback);
  m_ginjuice.attachPop(m_ginjuicePopCallback);
  m_softpoison.attachPop(m_softpoisonPopCallback);
  
  Serial.println("The Nextion-Display is ready...");
}
