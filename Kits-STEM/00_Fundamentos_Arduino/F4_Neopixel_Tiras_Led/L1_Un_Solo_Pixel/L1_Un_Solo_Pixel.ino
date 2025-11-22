/*
 * INSANI ROBOTICS - FUNDAMENTOS F4
 * Lección 1: Hola Neopixel (Control Básico)
 * ------------------------------------------------
 * Objetivo: Encender el primer LED de una tira inteligente.
 * Requisito: Tener instalada la librería "Adafruit NeoPixel".
 */

#include <Adafruit_NeoPixel.h>

// --- CONFIGURACIÓN ---
const int PIN_DATOS = 6;  // El pin donde conectamos el cable de datos (DIN)
const int NUM_LEDS  = 8;  // ¿Cuántos LEDs tiene tu tira? (Pon 1 si solo tienes uno)

// CREACIÓN DEL OBJETO (Instancia)
// Esto le dice a Arduino: "Crea una tira llamada 'tira' con estas características"
Adafruit_NeoPixel tira(NUM_LEDS, PIN_DATOS, NEO_GRB + NEO_KHZ800);

void setup() {
  tira.begin();           // Inicia la comunicación de datos
  tira.show();            // Apaga todos los LEDs al inicio (por seguridad)
  tira.setBrightness(50); // Ajusta el brillo al 50% (Ahorra energía y cuida los ojos)
}

void loop() {
  // Vamos a encender el PRIMER LED (El LED número 0)
  
  // Paso 1: Preparamos el color en la memoria (Rojo)
  // Sintaxis: (Posición, Rojo, Verde, Azul)
  tira.setPixelColor(0, 255, 0, 0);
  
  // Paso 2: Enviamos la orden a la tira
  tira.show();
  
  delay(1000); // Esperamos 1 segundo
  
  // Paso 3: Lo apagamos (Color negro es 0,0,0)
  tira.setPixelColor(0, 0, 0, 0);
  tira.show(); // ¡No olvides el show()!
  
  delay(1000);
}