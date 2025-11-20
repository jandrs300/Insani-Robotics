/*
 * ---------------------------------------------------------
 * INSANI ROBOTICS - FUNDAMENTOS DE ARDUINO
 * Módulo F1: Generación de Sonido con Buzzer
 * ---------------------------------------------------------
 * Objetivo: Hacer sonar notas básicas y entender la frecuencia.
 * * CONEXIONES:
 * - Buzzer Positivo (+) -> Pin D8
 * - Buzzer Negativo (-) -> GND
 */

// 1. CONFIGURACIÓN DE PINES
// Usamos una constante para facilitar cambios futuros.
const int PIN_BUZZER = 8;

void setup() {
  // 2. INICIALIZACIÓN
  // Aunque tone() configura el pin automáticamente, es buena práctica declararlo.
  pinMode(PIN_BUZZER, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Iniciando sistema de audio...");
}

void loop() {
  // --- SONIDO 1: Tono Grave ---
  Serial.println("Reproduciendo Tono Grave (DO)");
  // Sintaxis: tone(pin, frecuencia_en_hertz, duracion_ms);
  tone(PIN_BUZZER, 261, 500); // 261 Hz es aprox la nota DO central
  
  delay(500); // Esperamos a que termine el sonido
  delay(100); // Una pequeña pausa de silencio

  // --- SONIDO 2: Tono Agudo ---
  Serial.println("Reproduciendo Tono Agudo (SOL)");
  tone(PIN_BUZZER, 392, 500); // 392 Hz es aprox la nota SOL
  
  delay(500); // Esperamos
  
  // --- SILENCIO ---
  // Es importante dejar un tiempo de silencio antes de repetir
  noTone(PIN_BUZZER); // Aseguramos que se apague (por seguridad)
  delay(1000);        // Esperamos 1 segundo en silencio
}