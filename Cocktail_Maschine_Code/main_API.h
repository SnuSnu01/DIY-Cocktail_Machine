// API with Methods for mixing our drinks
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


/******************************************************************
 * Definition of the individual pins for the inputs of the relais *
 * // Still needs testing so leave it uncommented                 *
 * #define IN_1 15   // Vodka                                     *
 * #define IN_2 16   // Gin                                       *
 * #define IN_3 17   // Rum                                       *
 * #define IN_4 18   // Curacao                                   *
 * #define IN_5 19   // Coca-Cola                                 *
 * #define IN_6 21   // Orangejuice                               *
 * #define IN_7 22   // Peachjuice                                *
 * #define IN_8 23   // Cranberryjuice                            *
 ******************************************************************/


// Initialization of the individual pins
void pinInit() {
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
}


//************************************************
//* Here are the Methods for the beverages       *
//************************************************
void LongIsland() {
  digitalWrite(16, HIGH); //Gin an
  digitalWrite(17, HIGH); //Rum an
  digitalWrite(19, HIGH); //Cola an
  delay(13400); // 13,4sec
  digitalWrite(16, LOW); //Gin aus
  digitalWrite(17, LOW); //Rum aus
  digitalWrite(21, HIGH); //Orange an
  digitalWrite(15, HIGH); //Vodka an
  delay(13400); // 13,4sec
  digitalWrite(15, LOW); //Vodka aus
  delay(6600);
  digitalWrite(21, LOW); //Orange aus
  delay(140000);
  digitalWrite(19, LOW); //Cola aus 
  Serial.println("Erfolgreich eingefüllt!");
}

void SexOnTheBeach() {

}

void CubaLibre() {

}

void CranberryVodka() {

}

void Screwdriver() {

}

void BlueLady() {

}

void BlackThunder() {

}

void KickItIn() {

}

void AquaVelva() {

}

void SapphireMadras() {

}

void GreenWidow() {

}

void GreenEyes() {

}

void GreenDevil() {

}

void GinJuice() {

}

void SoftPoison() {

}
