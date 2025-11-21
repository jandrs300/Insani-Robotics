/*
 * ---------------------------------------------------------
 * INSANI ROBOTICS - FUNDAMENTOS DE ARDUINO
 * F1_L3: Consola de Control
 * Objetivo: Manejar múltiples entradas y salidas a la vez.
 * ---------------------------------------------------------
 */

// Definición de Pines
const int LED_1 = 10; 
const int LED_2 = 11; 
const int LED_3 = 12; 

const int BTN_1 = 3;
const int BTN_2 = 5;
const int BTN_3 = 7;

void setup() {
  // Configuramos LEDs como SALIDAS
  pinMode(LED_1, OUTPUT); 
  pinMode(LED_2, OUTPUT); 
  pinMode(LED_3, OUTPUT);
  // Configuramos Botones como ENTRADAS
  pinMode(BTN_1, INPUT); 
  pinMode(BTN_2, INPUT); 
  pinMode(BTN_3, INPUT);
}

void loop() {
  // Lógica Directa: El estado del LED es igual al estado del botón
  // Si botón es HIGH, LED se pone HIGH.
  
  digitalWrite(LED_1, digitalRead(BTN_1));
  digitalWrite(LED_2, digitalRead(BTN_2));
  digitalWrite(LED_3, digitalRead(BTN_3));
  
  // Nota: Arduino es tan rápido que verifica estos 3 botones miles de veces por segundo.
}