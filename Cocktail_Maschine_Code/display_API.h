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



// Declaring the objects of the listener
// Declare only those who report something back
NexTouch *nex_listen_list[] = {
  &m_longisland,
  NULL
};


//Query whether a prompt is coming from the display
void display_run() {
  nexLoop(nex_listen_list);
}


//************************************************
//* here are the events when a button is pressed *
//************************************************
void m_longislandPushCallback(void *ptr) {
    
  sendCommand("ausw_seite_1");
}



//************************************************
//* Here the display is initialized              *
//************************************************
void displayInit() {
  nexInit();

  m_longisland.attachPush(m_longislandPushCallback);
  Serial.println("The Nextion-Display is ready...");
}
