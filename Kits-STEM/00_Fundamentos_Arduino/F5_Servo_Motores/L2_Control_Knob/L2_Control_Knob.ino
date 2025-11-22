/*
 * INSANI ROBOTICS - FUNDAMENTOS F5
 * Lección 2: Control Manual de Servo (Knob)
 * ------------------------------------------------
 * Objetivo: Mover el servo proporcionalmente al giro de un potenciómetro.
 */

#include <Servo.h>

// --- CONFIGURACIÓN ---
Servo miServo;  // Creamos el objeto servo

const int PIN_SERVO = 5; // Salida al motor
const int PIN_POT   = A0; // Entrada del potenciómetro

int lecturaPot = 0; // Para guardar el valor crudo (0-1023)
int angulo = 0;     // Para guardar el ángulo traducido (0-180)

void setup() {
  miServo.attach(PIN_SERVO); // Iniciamos el servo
  Serial.begin(9600);        // Para ver los datos en pantalla
}

void loop() {
  // 1. LEER: Obtenemos el valor del potenciómetro
  lecturaPot = analogRead(PIN_POT);

  // 2. PROCESAR: Traducimos el valor
  // map(valor, min_entrada, max_entrada, min_salida, max_salida)
  angulo = map(lecturaPot, 0, 1023, 0, 180);

  // 3. ACTUAR: Movemos el servo
  miServo.write(angulo);

  // 4. DEBUG: Es útil ver qué está pasando
  // Si el servo tiembla, revisa estos números en el Monitor Serial
  Serial.print("Potenciometro: ");
  Serial.print(lecturaPot);
  Serial.print(" | Angulo Servo: ");
  Serial.println(angulo);

  // Pequeña pausa para estabilidad mecánica
  // Si es muy pequeño el delay, el servo puede zumbar mucho.
  delay(15); 
}