#include <Arduino.h>


// Définir les broches du DAC pour les composantes I et Q
#define DAC_PIN_I PA4
#define DAC_PIN_Q PA5


// Définir les tensions pour les symboles QPSK
const uint16_t I_values[4] = {2355, 3845, 2355, 3845}; // Tensions pour I (1.9V et 3.1V)
const uint16_t Q_values[4] = {2355, 2355, 3845, 3845}; // Tensions pour Q (1.9V et 3.1V)


void setup() {
  // Configurer la résolution du DAC à 12 bits
  analogWriteResolution(12);


  // Initialiser les sorties DAC à 0
  analogWrite(DAC_PIN_I, 0);
  analogWrite(DAC_PIN_Q, 0);
}


void loop() {
  // Parcourir les 4 symboles de la modulation QPSK
  for (int symbole = 0; symbole < 4; symbole++) {
    // Appliquer la tension pour la composante I
    analogWrite(DAC_PIN_I, I_values[symbole]);


    // Appliquer la tension pour la composante Q
    analogWrite(DAC_PIN_Q, Q_values[symbole]);


    // Attendre pour visualiser le symbole avant de passer au suivant
    delay(10);  // 1 seconde pour chaque symbole
  }
}
