/*
 * INSANI ROBOTICS - FUNDAMENTOS F8
 * Lección 1: Control Básico de Motores DC
 * ------------------------------------------------
 * Objetivo: Controlar dirección (Adelante/Atrás) de 2 motores mediante Puente H.
 * Conexión: Pines 2,3,4,5.
 */

// --- PINES DE CONTROL L293D ---
// Motor Izquierdo (Lado A)
const int M1_IN1 = 2;
const int M1_IN2 = 3;
// Motor Derecho (Lado B)
const int M2_IN3 = 4;
const int M2_IN4 = 5;

void setup() {
  // Todos los pines son SALIDAS porque enviamos órdenes
  pinMode(M1_IN1, OUTPUT);
  pinMode(M1_IN2, OUTPUT);
  pinMode(M2_IN3, OUTPUT);
  pinMode(M2_IN4, OUTPUT);
}

void loop() {
  // Secuencia de demostración
  
  // 1. Moverse hacia ADELANTE
  avanzar();
  delay(2000); // Durante 2 segundos
  
  // 2. PAUSA
  detener();
  delay(1000);
  
  // 3. Moverse hacia ATRÁS
  retroceder();
  delay(2000);
  
  // 4. PAUSA
  detener();
  delay(1000);
  
  // 5. GIRO TÁCTICO (Sobre su propio eje)
  girarDerecha();
  delay(800); // Un giro corto
  
  detener();
  delay(2000); // Espera larga antes de repetir
}

// --- FUNCIONES DE MOVIMIENTO ---
// Estas funciones encapsulan la lógica para que el loop sea fácil de leer

void avanzar() {
  // Motor Izquierdo Adelante
  digitalWrite(M1_IN1, HIGH);
  digitalWrite(M1_IN2, LOW);
  // Motor Derecho Adelante
  digitalWrite(M2_IN3, HIGH);
  digitalWrite(M2_IN4, LOW);
}

void retroceder() {
  // Motor Izquierdo Atrás
  digitalWrite(M1_IN1, LOW);
  digitalWrite(M1_IN2, HIGH);
  // Motor Derecho Atrás
  digitalWrite(M2_IN3, LOW);
  digitalWrite(M2_IN4, HIGH);
}

void detener() {
  // Apagar todo
  digitalWrite(M1_IN1, LOW);
  digitalWrite(M1_IN2, LOW);
  digitalWrite(M2_IN3, LOW);
  digitalWrite(M2_IN4, LOW);
}

void girarDerecha() {
  // Para girar a la derecha sobre el propio eje:
  // La rueda IZQUIERDA debe avanzar
  digitalWrite(M1_IN1, HIGH);
  digitalWrite(M1_IN2, LOW);
  // La rueda DERECHA debe retroceder
  digitalWrite(M2_IN3, LOW);
  digitalWrite(M2_IN4, HIGH);
}