/*
 * INSANI ROBOTICS - FUNDAMENTOS F6
 * Lección 1: Generación de Tonos Simples
 * ------------------------------------------------
 * Objetivo: Reproducir la escala musical (Do-Re-Mi...)
 * Conexión: Buzzer en Pin D8
 */

const int PIN_BUZZER = 8;

// Frecuencias de las notas (Octava 4) - Valores en Hertz
const int NOTE_C4 = 262; // Do
const int NOTE_D4 = 294; // Re
const int NOTE_E4 = 330; // Mi
const int NOTE_F4 = 349; // Fa
const int NOTE_G4 = 392; // Sol
const int NOTE_A4 = 440; // La
const int NOTE_B4 = 494; // Si
const int NOTE_C5 = 523; // Do (Agudo)

// Prototipo de función
void tocarNota(int frecuencia);

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
  // Llamamos a nuestra función personalizada para cada nota
  tocarNota(NOTE_C4); // Do
  tocarNota(NOTE_D4); // Re
  tocarNota(NOTE_E4); // Mi
  tocarNota(NOTE_F4); // Fa
  tocarNota(NOTE_G4); // Sol
  tocarNota(NOTE_A4); // La
  tocarNota(NOTE_B4); // Si
  tocarNota(NOTE_C5); // Do agudo
  
  delay(1000); // Esperar 1 segundo en silencio antes de repetir
}

// --- FUNCIÓN PERSONALIZADA ---
// Recibe la frecuencia y se encarga de tocarla y hacer la pausa
void tocarNota(int frecuencia) {
  tone(PIN_BUZZER, frecuencia); // Iniciar sonido
  delay(500);                   // Mantener sonido 500ms
  noTone(PIN_BUZZER);           // Detener sonido
  delay(50);                    // Breve silencio para separar las notas
}