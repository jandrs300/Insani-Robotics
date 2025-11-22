/*
 * INSANI ROBOTICS - FUNDAMENTOS F5
 * Lección 1: Barrido de Servo (Sweep
 * ------------------------------------------------
 * Objetivo: Mover el servo suavemente de 0 a 180 grados.
 * Librería: Servo.h (Incluida en Arduino IDE)
 */



#include <Servo.h>

// Creamos el objeto para controlar el servo
Servo miServo;

// Variables
const int PIN_SERVO = 5;  // Usamos el Pin 5
int pos = 0;              // Variable para guardar la posición actual

void setup() {
  // Iniciamos el servo en el pin correspondiente
  miServo.attach(PIN_SERVO);
}

void loop() {
  // --- IDA: De 0 a 180 grados ---
  // Aumentamos 1 grado cada vez
  for (pos = 0; pos <= 180; pos += 1) {
    miServo.write(pos);  // Ordenar al servo ir a la posición 'pos'
    delay(15);           // Esperar 15ms para que llegue (Velocidad)
  }

  // Esperamos un momento en el extremo
  delay(500);

  // --- VUELTA: De 180 a 0 grados ---
  // Disminuimos 1 grado cada vez
  for (pos = 180; pos >= 0; pos -= 1) {
    miServo.write(pos);
    delay(15);
  }

  delay(500);
}