/*
 * INSANI ROBOTICS - FUNDAMENTOS F2
 * Lección 2: Dimmer LED (Control PWM)
 * ------------------------------------------------
 * Objetivo: Controlar la intensidad de un LED usando un potenciómetro.
 * * CONEXIÓN:
 * - Potenciómetro -> Pin A0
 * - LED -> Pin D3 (Debe ser PWM ~)
 */

const int PIN_POTENCIOMETRO = A0;
const int PIN_LED = 3; // Pin PWM

void setup() {
  // Configuración de pines
  pinMode(PIN_LED, OUTPUT);
  
  // Iniciamos Serial para ver las matemáticas en acción
  Serial.begin(9600);
}

void loop() {
  // 1. ENTRADA: Leemos el potenciómetro (0 a 1023)
  int lectura = analogRead(PIN_POTENCIOMETRO);
  
  // 2. PROCESO: Mapeo (Regla de tres)
  // Traducimos de la escala "Gigante" (0-1023) a la escala "Pequeña" (0-255)
  // Sintaxis: map(valor, min_in, max_in, min_out, max_out)
  int brillo = map(lectura, 0, 1023, 0, 255);
  
  // 3. SALIDA: Escribimos el valor PWM en el LED
  // Usamos analogWrite, no digitalWrite
  analogWrite(PIN_LED, brillo);
  
  // 4. DEBUG: Verificamos los datos
  Serial.print("Potenciometro: ");
  Serial.print(lectura);
  Serial.print(" | Brillo LED enviado: ");
  Serial.println(brillo);
  
  delay(10); // Pequeña pausa para estabilidad
}