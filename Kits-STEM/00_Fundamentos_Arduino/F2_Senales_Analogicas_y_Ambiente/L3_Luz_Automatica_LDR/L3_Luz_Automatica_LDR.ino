/*
 * INSANI ROBOTICS - FUNDAMENTOS F2
 * Lección 3: Luz Automática con LDR
 * ------------------------------------------------
 * Objetivo: Encender un LED automáticamente cuando oscurece.
 * * CONEXIÓN ESPECIAL (DIVISOR DE TENSIÓN):
 * - LDR Pata 1 -> 5V
 * - LDR Pata 2 -> A0 Y TAMBIÉN a Resistencia 10k
 * - Resistencia 10k -> GND
 */

const int PIN_SENSOR_LUZ = A0;
const int PIN_BOMBILLA = 2; // LED que simula la luz de calle

// CALIBRACIÓN: Este número depende de la luz de tu salón.
// Mira el Monitor Serial para ajustarlo.
// Generalmente: < 500 es oscuro, > 500 es claro.
const int UMBRAL_OSCURIDAD = 500; 

void setup() {
  pinMode(PIN_BOMBILLA, OUTPUT);
  Serial.begin(9600); // Necesario para calibrar
}

void loop() {
  // 1. LEER: Obtenemos cantidad de luz (0 a 1023)
  int nivelLuz = analogRead(PIN_SENSOR_LUZ);
  
  // 2. DEBUG: Imprimimos el valor para saber cuánto hay
  Serial.print("Nivel de Luz detectado: ");
  Serial.println(nivelLuz);
  
  // 3. DECISIÓN: Comparamos con nuestro número mágico (Umbral)
  // Nota: En la mayoría de conexiones LDR, MENOS número significa MÁS oscuridad.
  
  if (nivelLuz < UMBRAL_OSCURIDAD) {
    digitalWrite(PIN_BOMBILLA, HIGH); // ¡Encender luces!
  } else {
    digitalWrite(PIN_BOMBILLA, LOW);  // Apagar luces
  }
  
  delay(200); // Pausa para no saturar
}