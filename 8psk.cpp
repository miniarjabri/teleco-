#include <Arduino.h>

// Définition des broches DAC pour les voies I et Q
#define DAC_PIN_I D13
#define DAC_PIN_Q A2

// Tableau des valeurs de tension (DAC) pour les composantes I et Q en fonction du symbole 8-PSK
const uint16_t valeurs_I[8] = {3847, 3629, 3102, 2575, 2358, 3629, 3102, 2575}; // Valeurs en DAC pour I
const uint16_t valeurs_Q[8] = {3102, 3629, 3847, 3629, 3102, 2575, 2358, 2575}; // Valeurs en DAC pour Q

void setup() {
  // Configuration des broches DAC comme sorties
  pinMode(DAC_PIN_I, OUTPUT);
  pinMode(DAC_PIN_Q, OUTPUT);
}

void loop() {
  // Boucle continue pour générer chaque symbole en 8-PSK
  for (uint8_t symbole = 0; symbole < 8; symbole++) {
    // Écriture des valeurs sur les DAC pour les composantes I et Q
    analogWrite(DAC_PIN_I, valeurs_I[symbole]);
    analogWrite(DAC_PIN_Q, valeurs_Q[symbole]);
    
    // Durée pour visualiser chaque symbole sur l'oscilloscope
    delay(100); // Ajustez le délai pour la durée de visualisation souhaitée
  }
  delay(500);
}
