#include <Arduino.h>

int ldrPin = A0; 
int ledPin = 8; 
int valeurLDR = 0;
int seuil = 400;

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);      
}

void loop() {
  valeurLDR = analogRead(ldrPin); 
  
  Serial.print("Valeur LDR : ");
  Serial.println(valeurLDR);
  
  if (valeurLDR < seuil) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(500);
}
