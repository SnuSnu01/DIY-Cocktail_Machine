// API with Methods for mixing our drinks
// Author :
// Date   : 17.02.2022
// Version: 0.0.1


/******************************************************************
 * Definition of the individual pins for the inputs of the relais *
 * // Still needs testing so leave it commented                   *
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
  pinMode(15, OUTPUT);  //Vodka
  pinMode(16, OUTPUT);  //Gin
  pinMode(17, OUTPUT);  //Rum
  pinMode(18, OUTPUT);  //Curacao
  pinMode(19, OUTPUT);  //Coca-Cola
  pinMode(21, OUTPUT);  //Orangejuice
  pinMode(22, OUTPUT);  //Peachjuice
  pinMode(23, OUTPUT);  //Cranberryjuice
}



//************************************************
//* Here are the Methods for the pump testing    *
//************************************************

void Pump1(){
  digitalWrite(15, HIGH);
  delay(10000);
  digitalWrite(15, LOW);
}

void Pump2(){
  digitalWrite(16, HIGH);
  delay(10000);
  digitalWrite(16, LOW);
}

void Pump3(){
  digitalWrite(17, HIGH);
  delay(10000);
  digitalWrite(17, LOW);
}

void Pump4(){
  digitalWrite(18, HIGH);
  delay(10000);
  digitalWrite(18, LOW);
}

void Pump5(){
  digitalWrite(19, HIGH);
  delay(10000);
  digitalWrite(19, LOW);
}

void Pump6(){
  digitalWrite(21, HIGH);
  delay(10000);
  digitalWrite(21, LOW);
}

void Pump7(){
  digitalWrite(22, HIGH);
  delay(10000);
  digitalWrite(22, LOW);
}

void Pump8(){
  digitalWrite(23, HIGH);
  delay(10000);
  digitalWrite(23, LOW);
}


//************************************************
//* Here are the Methods for the beverages       *
//************************************************

void mlCalculator(int ml) {
  double constmlS = 100.0 / 60.0;
  double calcmlS = ml/constmlS * 1000;
  delay(calcmlS);
}

void LongIsland() {
  digitalWrite(16, HIGH); //Gin an
  digitalWrite(17, HIGH); //Rum an
  digitalWrite(19, HIGH); //Cola an
  mlCalculator(20);
  digitalWrite(16, LOW); //Gin aus
  digitalWrite(17, LOW); //Rum aus
  digitalWrite(21, HIGH); //Orange an
  digitalWrite(15, HIGH); //Vodka an
  mlCalculator(20);
  digitalWrite(15, LOW); //Vodka aus
  mlCalculator(10);
  digitalWrite(21, LOW); //Orange aus
  mlCalculator(200);
  digitalWrite(19, LOW); //Cola aus 
  Serial.println("Erfolgreich eingefüllt!");
}

void SexOnTheBeach() {
  digitalWrite(15, HIGH); //Vodka on
  digitalWrite(21, HIGH); //Orange on
  digitalWrite(23, HIGH); //Cranberry on
  mlCalculator(40);
  digitalWrite(15, LOW);  //Vodka off
  digitalWrite(21, LOW);  //Orange off
  digitalWrite(23, LOW);  //Cranberry off
  digitalWrite(22, HIGH); //Peach on
  mlCalculator(20);
  digitalWrite(22, LOW); //Peach off
  Serial.println("Erfolgreich eingefüllt!");
} 

void CubaLibre() {
  digitalWrite(19, HIGH);
  digitalWrite(17, HIGH);
  mlCalculator(60);
  digitalWrite(17, LOW);
  mlCalculator(180);
  digitalWrite(19, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void CranberryVodka() {
  digitalWrite(23, HIGH);
  digitalWrite(15, HIGH);
  mlCalculator(40);
  digitalWrite(15, LOW);
  mlCalculator(80);
  digitalWrite(23, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void Screwdriver() {
  digitalWrite(21, HIGH);
  digitalWrite(15, HIGH);
  mlCalculator(50);
  digitalWrite(15, LOW);
  mlCalculator(200);
  digitalWrite(21, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void BlueLady() {
  digitalWrite(18, HIGH);
  digitalWrite(16, HIGH);
  mlCalculator(20);
  digitalWrite(18, LOW);
  mlCalculator(20);
  digitalWrite(16, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void BlackThunder() {
  digitalWrite(15, HIGH); //Vodka
  digitalWrite(18, HIGH); //Curacao
  digitalWrite(19, HIGH); //Cola
  mlCalculator(20);
  digitalWrite(18, LOW);
  mlCalculator(20);
  digitalWrite(15, LOW);
  mlCalculator(120);
  digitalWrite(19, LOW); 
  Serial.println("Erfolgreich eingefüllt!");
}

void KickItIn() {
  digitalWrite(15, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(23, HIGH);
  mlCalculator(20);
  digitalWrite(15, LOW);
  digitalWrite(18, LOW);
  digitalWrite(23, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void AquaVelva() {
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  mlCalculator(40);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(18, HIGH);
  mlCalculator(25);
  digitalWrite(18, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void SapphireMadras() {
  digitalWrite(16, HIGH);
  digitalWrite(21, HIGH);
  digitalWrite(23, HIGH);
  mlCalculator(50);
  digitalWrite(16, LOW);
  digitalWrite(21, LOW);
  mlCalculator(50);
  digitalWrite(23, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void GreenWidow() {
  digitalWrite(18, HIGH);
  digitalWrite(21, HIGH);
  mlCalculator(40);
  digitalWrite(18, LOW);
  mlCalculator(210);
  digitalWrite(21, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void GreenEyes() {
  digitalWrite(15, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(21, HIGH);
  mlCalculator(30);
  digitalWrite(15, LOW);
  digitalWrite(18, LOW);
  mlCalculator(90);
  digitalWrite(21, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void GreenDevil() {
  digitalWrite(17, HIGH);
  digitalWrite(21, HIGH);
  mlCalculator(20);
  digitalWrite(17, LOW);
  digitalWrite(21, LOW);
  digitalWrite(18, HIGH);
  mlCalculator(10);
  digitalWrite(18, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void GinJuice() {
  digitalWrite(16, HIGH);
  digitalWrite(21, HIGH);
  mlCalculator(50);
  digitalWrite(16, LOW);
  mlCalculator(200);
  digitalWrite(21, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}

void SoftPoison() {
  digitalWrite(18, HIGH);
  digitalWrite(21, HIGH);
  mlCalculator(20);
  digitalWrite(18, LOW);
  mlCalculator(140);
  digitalWrite(21, LOW);
  Serial.println("Erfolgreich eingefüllt!");
}