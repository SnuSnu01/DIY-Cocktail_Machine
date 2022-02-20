// API with Methods for mixing our drinks
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


//Hier Kommt der WebServer
#include "main_API.h"
#include <WiFi.h>
#include <AsyncTCP.h>
//#include <ESPAsyncWebServer.h>
//#include <WiFiEspAT.h>
#include "Test-Seite.h"

const char* ssid      = "KHE-Cocktails";
const char* passwort  = "";

WiFiServer server(80);

void long_island_ice_tea_seite() {
  Serial.println("GET /");
  server.send(200, "text/html", LongIslandIceTea);
}

void ap_server(){
  Serial.print("Setzt AP (Access Point)...");
  WiFi.softAP(ssid, passwort);
  IPAddress IP = WiFi.softAPIP();
  Serial.print(IP);
  
  server.on("/", long_island_ice_tea_seite);
  server.begin();
}
