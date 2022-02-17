// API for the Display defenitions etc.
// Author :
// Date   : 17.02.2022
// Version: 0.0.1

// Including the Nextion-Library
#inlcude "Nextion.h"

//Including the main_API.h
#include "main_API.h"


// Initialization of the SoftwareSerial
#define DEFAULT_RXPin 12
#define DEFAULT_TXPin 13
SoftwareSerial HMISerial(DEFAULT_RXPin, DEFAULT_TXPin);


// Declaring the buttons





// Declaring the objects of the listener
// Declare only those who report something back
NexTouch *nex_listen_list[] = {
  
};


//Query whether a prompt is coming from the display
void display_run() {
  nexLoop(nex_Listen_list);
}


//************************************************
//* here are the events when a button is pressed *  
//************************************************
void XYZPushCallback(void *ptr) {
  
}



//************************************************
//* Here the display is initialized              *  
//************************************************
void displayInit() {
  nexInit();

  buttonXYZ.attachPush(buttonXYZPushCallback);
  Serial.println("The Nextion-Display is ready...");
}
