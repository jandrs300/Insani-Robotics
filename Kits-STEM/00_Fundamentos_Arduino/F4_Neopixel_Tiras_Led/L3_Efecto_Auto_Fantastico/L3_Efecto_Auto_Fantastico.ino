/*
 * INSANI ROBOTICS - FUNDAMENTOS F3
 * Lección 1: Colores Básicos (LED RGB)
 * ------------------------------------------------
 * Objetivo: Entender cómo formar colores mezclando Rojo, Verde y Azul.
 * * CONEXIÓN:
 * - Pata Roja   -> Pin D11  (PWM)
 * - Pata Verde  -> Pin D9 (PWM)
 * - Pata Azul   -> Pin D10 (PWM)
 * - Pata Larga  -> GND
 */

// Definición de Pines
const int PIN_ROJO  = 11;
const int PIN_VERDE = 9;
const int PIN_AZUL  = 10;

void setup() {
  // Configuramos los 3 pines como SALIDA
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
  pinMode(PIN_AZUL, OUTPUT);
}

void loop() {
  // --- COLORES PRIMARIOS ---
  
  // 1. Rojo Puro
  establecerColor(255, 0, 0);
  delay(1000);

  // 2. Verde Puro
  establecerColor(0, 255, 0);
  delay(1000);

  // 3. Azul Puro
  establecerColor(0, 0, 255);
  delay(1000);

  // --- COLORES SECUNDARIOS (MEZCLAS) ---

  // 4. Amarillo (Rojo + Verde)
  establecerColor(255, 255, 0);
  delay(1000);

  // 5. Cyan (Verde + Azul) -> Color agua
  establecerColor(0, 255, 255);
  delay(1000);

  // 6. Magenta (Rojo + Azul) -> Color violeta/rosa
  establecerColor(255, 0, 255);
  delay(1000);

  // 7. Blanco (Todos encendidos)
  establecerColor(255, 255, 255);
  delay(1000);
  
  // 8. Apagado (Negro)
  establecerColor(0, 0, 0);
  delay(1000);
}

// --- FUNCIÓN AUXILIAR ---
// Esta función hace que el código principal sea más limpio y fácil de leer.
// Recibe tres números del 0 al 255.
void establecerColor(int r, int g, int b) {
  analogWrite(PIN_ROJO, r);
  analogWrite(PIN_VERDE, g);
  analogWrite(PIN_AZUL, b);
}