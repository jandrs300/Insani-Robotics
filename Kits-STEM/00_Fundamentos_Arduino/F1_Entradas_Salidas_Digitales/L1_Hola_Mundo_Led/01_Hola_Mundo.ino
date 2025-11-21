/*
 * ---------------------------------------------------------
 * INSANI ROBOTICS - FUNDAMENTOS DE ARDUINO
 * F1_L1: Hola Mundo (Blink Externo)
 * Objetivo: Entender digitalWrite y delay.
 * ---------------------------------------------------------
 */

const int PIN_LED = 2; // Definimos que el LED está en el pin 2

void setup() {
  // Configuramos el pin como SALIDA (Arduino envía voltaje)
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED, HIGH); // Enciende el LED (5V)
  delay(1000);                 // Espera 1000 milisegundos (1 seg)
  
  digitalWrite(PIN_LED, LOW);  // Apaga el LED (0V)
  delay(1000);                 // Espera 1 seg apagado
}