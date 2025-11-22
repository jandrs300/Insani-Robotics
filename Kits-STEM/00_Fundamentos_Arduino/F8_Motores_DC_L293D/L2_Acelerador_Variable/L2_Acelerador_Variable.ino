/*
 * INSANI ROBOTICS - FUNDAMENTOS F8
 * Lección 2: Control de Velocidad Variable
 * ------------------------------------------------
 * Objetivo: Usar PWM para acelerar y desacelerar suavemente.
 * Pines Enable: 9 y 10.
 */

// --- DEFINICIÓN DE PINES ---
// Motor Izquierdo (Lado A)
const int ENA = 9;  // Pin PWM para velocidad
const int IN1 = 2;  // Dirección 1
const int IN2 = 3;  // Dirección 2

// Motor Derecho (Lado B)
const int ENB = 10; // Pin PWM para velocidad
const int IN3 = 4;  // Dirección 1
const int IN4 = 5;  // Dirección 2

void setup() {
  // Configuramos todos los pines como SALIDA
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // --- FASE 1: PREPARAR MOTORES (Poner la marcha) ---
  // Dirección: ADELANTE
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  // --- FASE 2: ACELERAR (De 0 a 255) ---
  // El motor empieza parado y sube de velocidad gradualmente
  for (int velocidad = 0; velocidad < 256; velocidad++) {
    analogWrite(ENA, velocidad); // Velocidad Motor A
    analogWrite(ENB, velocidad); // Velocidad Motor B
    delay(30); // Esperamos un poquito en cada paso
  }
  
  // Ya estamos a máxima velocidad
  delay(1000); 

  // --- FASE 3: DESACELERAR (De 255 a 0) ---
  // El motor baja de velocidad hasta detenerse
  for (int velocidad = 255; velocidad >= 0; velocidad--) {
    analogWrite(ENA, velocidad);
    analogWrite(ENB, velocidad);
    delay(30);
  }

  // Apagar motores por seguridad (Quitar la marcha)
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  
  delay(2000); // Esperar 2 segundos antes de repetir
}