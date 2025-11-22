/*
 * INSANI ROBOTICS - FUNDAMENTOS F5
 * Lección 3: Control de Múltiples Servos (Sincronización)
 * ------------------------------------------------
 * Objetivo: Mover dos motores de forma coordinada.
 * ADVERTENCIA: Si usas USB, los servos pueden moverse lento por falta de corriente.
 */

#include <Servo.h>

// 1. CREAMOS LOS OBJETOS
Servo servoBase;  // Motor 1
Servo servoCodo;  // Motor 2

// Definición de pines
const int PIN_BASE = 5;
const int PIN_CODO = 6;

void setup() {
  servoBase.attach(PIN_BASE);
  servoCodo.attach(PIN_CODO);
  
  // Posición Inicial (Home)
  servoBase.write(90);
  servoCodo.write(90);
  delay(1000);
}

void loop() {
  // --- MOVIMIENTO 1: Espejo (Opuestos) ---
  // Mientras la Base va a la derecha (0->180), el Codo va a la izquierda (180->0)
  
  for (int i = 0; i <= 180; i++) {
    servoBase.write(i);        // Sube
    servoCodo.write(180 - i);  // Baja (Matemática inversa)
    delay(10); // Velocidad rápida
  }
  
  delay(500); // Pausa

  // --- MOVIMIENTO 2: Retorno Sincronizado ---
  for (int i = 180; i >= 0; i--) {
    servoBase.write(i);       // Baja
    servoCodo.write(180 - i); // Sube
    delay(10);
  }
  
  delay(1000);
  
  // --- MOVIMIENTO 3: Independiente ---
  // Primero uno...
  servoBase.write(90);
  delay(500);
  // ...luego el otro
  servoCodo.write(90);
  delay(500);
}