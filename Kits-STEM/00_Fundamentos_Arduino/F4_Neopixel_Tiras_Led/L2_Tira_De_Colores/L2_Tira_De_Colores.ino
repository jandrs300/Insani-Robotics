/*
 * INSANI ROBOTICS - FUNDAMENTOS F4
 * Lección 2: Barrido de Color (Color Wipe)
 * ------------------------------------------------
 * Objetivo: Usar un bucle para encender LEDs secuencialmente.
 * Librería requerida: Adafruit NeoPixel
 */

#include <Adafruit_NeoPixel.h>

const int PIN_DATOS = 6;
// ¡CAMBIA ESTO! Pon aquí cuántos LEDs tiene TU tira real.
// Si usas un anillo de 12, pon 12. Si usas una tira de 8, pon 8.
const int NUM_LEDS  = 8; 

// Crear el objeto tira
Adafruit_NeoPixel tira(NUM_LEDS, PIN_DATOS, NEO_GRB + NEO_KHZ800);

void setup() {
  tira.begin();
  tira.show();            // Apagar todo al iniciar
  tira.setBrightness(50); // Brillo al 50%
}

void loop() {
  // --- EFECTO 1: Llenado Rojo (Uno por uno) ---
  // El bucle va desde el LED 0 hasta el último
  for(int i = 0; i < NUM_LEDS; i++) {
    tira.setPixelColor(i, 255, 0, 0); // Configura el color ROJO en la posición "i"
    tira.show();      // Muestra el cambio inmediatamente
    delay(100);       // Espera 100ms para que el ojo vea el movimiento
  }

  delay(1000); // Espera 1 segundo con todo rojo

  // --- EFECTO 2: Borrado (Apagar uno por uno) ---
  // Usamos la misma lógica, pero pintando de NEGRO (0,0,0)
  for(int i = 0; i < NUM_LEDS; i++) {
    tira.setPixelColor(i, 0, 0, 0); 
    tira.show();
    delay(100);
  }
  
  delay(500);

  // --- EFECTO 3: Llenado Verde Rápido ---
  for(int i = 0; i < NUM_LEDS; i++) {
    tira.setPixelColor(i, 0, 255, 0); 
    tira.show();
    delay(30); // Al reducir el delay, el efecto es más rápido
  }
  
  // Reinicio
  delay(1000);
  tira.clear(); // Función especial para borrar toda la memoria RAM de la tira
  tira.show();
  delay(500);
}