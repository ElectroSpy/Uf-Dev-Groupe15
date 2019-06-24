#include "DHT.h" 
#define PIN_LED_R1 14 // Définition des LED et de leurs ports
#define PIN_LED_B1 14
#define PIN_LED_R2 14
#define PIN_LED_B2 14
#define CAPTEUR 14
int VPH = 3; // Défintion des fonctions : Humidité plante
int VCH; // Humidité capteur
int VPT = 3; // Température plante
int VCT; // Température Capteur
float h; // Humidité chiffrée capteur
float t; // Température chiffrée capteur

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
  pinMode(PIN_LED_R1, OUTPUT);
  pinMode(PIN_LED_B1, OUTPUT);
  pinMode(PIN_LED_R2, OUTPUT);
  pinMode(PIN_LED_B2, OUTPUT);
  pinMode(CAPTEUR, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   float h = dht.readHumidity();
   float t = dht.readTemperature();
  if (t <= -4){
    VCT = 1;
  }
  if (t > -4 && t <= 2){
    VCT = 2;
  }
  if (t > 2 && t <= 8){
    VCT = 3;
  }
  if (t > 8 && t <= 16){
    VCT = 4;
  }
  if (t > 16 && t <= 22){
    VCT = 5;
  }
  if (t > 22 && t <= 28){
    VCT = 6;
  }
  if (t > 28 && t <= 34){
    VCT = 7;
  }
  if (t > 34 && t <= 40){
    VCT = 8;
  }
  if (t > 40){
    VCT = 9;
  }
  if VTC > VPT {
    digitalWrite(PIN_LED_R1, HIGH);
    digitalWrite(PIN_LED_B1, LOW);
  }
  else if VTC < VPT {
    digitalWrite(PIN_LED_R1, LOW);
    digitalWrite(PIN_LED_B1, HIGH);
  }
  if (h <= 15){
    VCH = 1;
  }
  if (h > 15 && h <= 25){
    VCH = 2;
  }
  if (h > 25 && h <= 35){
    VCH = 3;
  }
  if (h > 35 && h <= 45){
    VCH = 4;
  }
  if (h > 45 && h <= 55){
    VCH = 5;
  }
  if (h > 55 && h <= 65){
    VCH = 6;
  }
  if (h > 65 && h <= 75){
    VCH = 7;
  }
  if (h > 75 && h <= 85){
    VCH = 8;
  }
  if (h > 85){
    VCH = 9;
  }
  if VCH > VPH {
    digitalWrite(PIN_LED_R1, HIGH);
    digitalWrite(PIN_LED_B1, LOW);
  }
  else if VCH < VPH {
    digitalWrite(PIN_LED_R1, LOW);
    digitalWrite(PIN_LED_B1, HIGH);
  }
}
