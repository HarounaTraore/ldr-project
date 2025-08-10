#include <Arduino.h>

int ldrPin = A0; // LDR sur entrée analogique A0
int ledPin = 8;  // LED sur sortie numérique 8
int valeurLDR = 0;
int seuil = 400; // Ajuste selon ton environnement

void setup() {
  pinMode(ledPin, OUTPUT); // LED en sortie
  Serial.begin(9600);      // Communication série
}

void loop() {
  valeurLDR = analogRead(ldrPin); // Lire la luminosité
  
  Serial.print("Valeur LDR : ");
  Serial.println(valeurLDR);
  
  if (valeurLDR < seuil) {
    digitalWrite(ledPin, HIGH); // Allume la LED s'il fait sombre
  } else {
    digitalWrite(ledPin, LOW);  // Éteint sinon
  }
  
  delay(500);
}
