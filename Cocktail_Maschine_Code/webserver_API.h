// API with Methods for mixing our drinks
// Author :
// Date   : 17.02.2022
// Version: 0.1.2


//Hier Kommt der WebServer
#include "main_API.h"
#include "WiFi.h"
#include "ESPAsyncWebServer.h"
#include "SPIFFS.h"


// Replace with your network credentials
const char* ssid     = "ESP32";
const char* passwort = "";

// http:[port 80]
AsyncWebServer server(80);
//192.168.4.1


void HTMLSeiten() {

  server.on("/", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Hauptseite.html", String(), false);
  });

  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/style.css", "text/css");
  });

  server.on("/A-Kick-in-the-Crotch.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/A-Kick-in-the-Crotch.html", String(), false);
  });

  server.on("/Aqua-Velva.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Aqua-Velva.html", String(), false);
  });

  server.on("/Blue-Lady.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Blue-Lady.html", String(), false);
  });

  server.on("/Black-Thunder.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Black-Thunder.html", String(), false);
  });

  server.on("/Cranberry-Wodka.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Cranberry-Wodka.html", String(), false);
  });

  server.on("/Cuba-Libre.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Cuba-Libre.html", String(), false);
  });

  server.on("/Gin-Juice.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Gin-Juice.html", String(), false);
  });

  server.on("/Green-Devil.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Green-Devil.html", String(), false);
  });

  server.on("/Green-Eyes.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Green-Eyes.html", String(), false);
  });

  server.on("/Grüne-Witwe.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Grüne-Witwe.html", String(), false);
  });

  server.on("/Long-Island-Ice-Tea.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Long-Island-Ice-Tea.html", String(), false);
  });

  server.on("/Sapphire-Madras.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Sapphire-Madras.html", String(), false);
  });

  server.on("/Screwdriver.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Screwdriver.html", String(), false);
  });

  server.on("/Sex-on-the-Beach.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Sex-on-the-Beach.html", String(), false);
  });

  server.on("/Soft-Poison.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Soft-Poison.html", String(), false);
  });

  server.on("/Pumpentest.html", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Pumpentest.html", String(), false);
  });

  //**********************************************************************************

  server.on("/m_AKick", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheKickItIn = true;
    request->redirect("/");
  });

  server.on("/m_AquaVelva", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheAquaVelva = true;
    request->redirect("/");
  });

  server.on("/m_BlackThunder", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheBlackThunder = true;
    request->redirect("/");
  });

  server.on("/m_BlueLady", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheBlueLady = true;
    request->redirect("/");
  });

  server.on("/m_CranberryWodka", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheCranberryVodka = true;
    request->redirect("/");
  });


  server.on("/m_CubaLibre", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheCubaLibre = true;
    request->redirect("/");
  });


  server.on("/m_GinJuice", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheGinJuice = true;
    request->redirect("/");
  });

  server.on("/m_GreenDevil", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheGreenDevil = true;
    request->redirect("/");
  });

  server.on("/m_GreenEyes", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheGreenEyes = true;
    request->redirect("/");
  });

  server.on("/m_GrueneWitwe", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheGreenWidow = true;
    request->redirect("/");
  });

  server.on("/m_LongIsland", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheLongIsland = true;
    request->redirect("/");
  });

  server.on("/m_SapphireMadras", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheSapphireMadras = true;
    request->redirect("/");
  });

  server.on("/m_Screwdriver", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheScrewdriver = true;
    request->redirect("/");
  });

  server.on("/m_SexontheBeach", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheSexOnTheBeach = true;
    request->redirect("/");
  });

  server.on("/m_SoftPoison", HTTP_GET, [](AsyncWebServerRequest * request) {
    macheSoftPoison = true;
    request->redirect("/");
  });
  
  server.on("/pumpe1", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump1 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe2", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump2 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe3", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump3 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe4", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump4 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe5", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump5 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe6", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump6 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe7", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump7 = true;
    request->redirect("/Pumpentest.html");
  });
  
  server.on("/pumpe8", HTTP_GET, [](AsyncWebServerRequest * request) {
    machePump8 = true;
    request->redirect("/Pumpentest.html");
  });
}



void HTMLBilder() {
  server.on("/A-Kick.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/A-Kick.png", "image/png");
  });

  server.on("/Black-Thunder.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Black-Thunder.png", "image/png");
  });

  server.on("/Cocktail-Curacao.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Cocktail-Curacao.png", "image/png");
  });

  server.on("/Cranberry-Wodka.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Cranberry-Wodka.png", "image/png");
  });

  server.on("/Cuba-Libre.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Cuba-Libre.png", "image/png");
  });

  server.on("/Gin-Juice.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Gin-Juice.png", "image/png");
  });

  server.on("/Grasshopper.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Grasshopper.png", "image/png");
  });

  server.on("/Green-Devil.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Green-Devil.png", "image/png");
  });

  server.on("/Green-Eyes.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Green-Eyes.png", "image/png");
  });

  server.on("/Long-Island-Iced-Tea.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Long-Island-Iced-Tea.png", "image/png");
  });

  server.on("/Sapphire-Madras.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Sapphire-Madras.png", "image/png");
  });

  server.on("/Screwdriver.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Screwdriver.png", "image/png");
  });

  server.on("/Sex-on-the-Beach.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Sex-on-the-Beach.png", "image/png");
  });

  server.on("/Soft-Poison.png", HTTP_GET, [](AsyncWebServerRequest * request) {
    request->send(SPIFFS, "/Soft-Poison.png", "image/png");
  });
}

void ap_server() {
  Serial.println(" Web-Server Programm lädt");

  if (!SPIFFS.begin(true)) {
    Serial.println("Beim laden von SPIFFS ist ein Fehler aufgetreten");
    return;
  }

  Serial.print("Setzt AP (Access Point)...");
  WiFi.softAP(ssid, passwort);
  IPAddress IP = WiFi.softAPIP();
  Serial.print(IP);

  HTMLBilder();
  HTMLSeiten();

  server.begin();
  Serial.println("Server started");
}
