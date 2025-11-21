/*
 * ---------------------------------------------------------
 * INSANI ROBOTICS - FUNDAMENTOS DE ARDUINO
 * F1_L2: El Interruptor (Lectura Digital)
 * Objetivo: Usar un botón para controlar un LED.
 * ---------------------------------------------------------
 */

const int PIN_LED = 2;
const int PIN_BOTON = 3;

void setup() {
  pinMode(PIN_LED, OUTPUT); // El LED es una salida
  pinMode(PIN_BOTON, INPUT); // El botón es una ENTRADA (Arduino lee voltaje)
}

void loop() {
  // Leemos el estado del botón (0 o 1)
  int estadoBoton = digitalRead(PIN_BOTON);

  // Si el botón está presionado (HIGH)...
  if (estadoBoton == HIGH) {
    digitalWrite(PIN_LED, HIGH); // Encendemos LED
  } else {
    digitalWrite(PIN_LED, LOW);  // Si no, apagamos LED
  }
}