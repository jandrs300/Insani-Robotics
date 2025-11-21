/*
 * INSANI ROBOTICS - FUNDAMENTOS F3
 * Lección 3: Arcoíris Automático (Fading RGB)
 * ------------------------------------------------
 * Objetivo: Transición fluida de colores (Spectrum).
 * Mejoras: Lógica de bucles corregida y estructura C++ estandarizada.
 */

// --- CONSTANTES DE HARDWARE ---
const int PIN_ROJO  = 11;
const int PIN_VERDE = 9;
const int PIN_AZUL  = 10;

// --- CONFIGURACIÓN ---
const int TIEMPO_ESPERA = 10; // Milisegundos entre cambios (Velocidad)
const int BRILLO_MAX = 255;

// --- PROTOTIPOS DE FUNCIONES ---
// Declaramos la función antes para cumplir con buenas prácticas de C++
void establecerColor(int r, int g, int b);

void setup() {
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
  pinMode(PIN_AZUL, OUTPUT);
}

void loop() {
  // Para una transición suave sin pausas, los bucles deben 
  // terminar uno antes del máximo para no repetir el color inicial del siguiente.

  // FASE 1: De ROJO (255,0,0) a VERDE (0,255,0)
  // El Rojo disminuye, el Verde aumenta.
  for (int i = 0; i < BRILLO_MAX; i++) {
    establecerColor(BRILLO_MAX - i, i, 0);
    delay(TIEMPO_ESPERA);
  }

  // FASE 2: De VERDE (0,255,0) a AZUL (0,0,255)
  // El Verde disminuye, el Azul aumenta.
  for (int i = 0; i < BRILLO_MAX; i++) {
    establecerColor(0, BRILLO_MAX - i, i);
    delay(TIEMPO_ESPERA);
  }

  // FASE 3: De AZUL (0,0,255) a ROJO (255,0,0)
  // El Azul disminuye, el Rojo aumenta.
  for (int i = 0; i < BRILLO_MAX; i++) {
    establecerColor(i, 0, BRILLO_MAX - i);
    delay(TIEMPO_ESPERA);
  }
}

// --- IMPLEMENTACIÓN DE FUNCIONES ---
void establecerColor(int r, int g, int b) {
  // Usamos analogWrite para generar la señal PWM
  analogWrite(PIN_ROJO, r);
  analogWrite(PIN_VERDE, g);
  analogWrite(PIN_AZUL, b);
}