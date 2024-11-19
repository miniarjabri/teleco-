#include <Arduino.h>

// Définition des broches DAC pour les voies I et Q
#define DAC_PIN_I D13
#define DAC_PIN_Q A2

// Tableau des valeurs de tension (DAC) pour les composantes I et Q en fonction du symbole 16-QAM
const uint16_t valeurs_I[16] = {2358, 2358, 2358, 2358, 2854, 2854, 2854, 2854, 
                                3350, 3350, 3350, 3350, 3847, 3847, 3847, 3847}; // Valeurs en DAC pour I
const uint16_t valeurs_Q[16] = {2358, 2854, 3350, 3847, 2358, 2854, 3350, 3847, 
                                2358, 2854, 3350, 3847, 2358, 2854, 3350, 3847}; // Valeurs en DAC pour Q

void setup() {
  // Configuration des broches DAC comme sorties
  pinMode(DAC_PIN_I, OUTPUT);
  pinMode(DAC_PIN_Q, OUTPUT);
}

void loop() {
  // Boucle continue pour générer chaque symbole en 16-QAM
  for (uint8_t symbole = 0; symbole < 16; symbole++) {
    // Écriture des valeurs sur les DAC pour les composantes I et Q
    analogWrite(DAC_PIN_I, valeurs_I[symbole]);
    analogWrite(DAC_PIN_Q, valeurs_Q[symbole]);
    
    // Durée pour visualiser chaque symbole sur l'oscilloscope
    delay(100); // Ajustez le délai pour la durée de visualisation souhaitée
   
  }
  delay(500); // Pause avant de recommencer la séquence
}
