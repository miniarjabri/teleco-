#include <Arduino.h>
// Définir la broche du DAC
#define DAC_PIN PA4


// Tensions correspondantes pour 0 et 1
const uint16_t tension0 = 2355; // 1.9V (0 → 1.9V en 12 bits)
const uint16_t tension1 = 3845; // 3.1V (1 → 3.1V en 12 bits)


void setup() {
  // Initialiser la communication série
  Serial.begin(9600);
 
  // Configurer la résolution du DAC à 12 bits
  analogWriteResolution(12);
 
  // Message d'introduction
  Serial.println("Entrez un mot de 8 bits (ex: 11001101) : ");
}


void loop() {
   
    for(int symbole=0; symbole<2;symbole++ ){
      if (symbole== 1) {
        // Ecrire 3.1V sur la sortie DAC (1 → 3.1V)
        analogWrite(DAC_PIN, tension1);
      } else if (symbole == 0) {
        // Ecrire 1.9V sur la sortie DAC (0 → 1.9V)
        analogWrite(DAC_PIN, tension0);  }
        delay(10);
   
      }
}


