/*
 * INSANI ROBOTICS - FUNDAMENTOS F6
 * Lección 2: Reproductor de Melodías con Arrays
 * ------------------------------------------------
 * Objetivo: Reproducir una secuencia musical (Intro Star Wars simplificada)
 * Conexión: Buzzer en Pin D8
 */

const int PIN_BUZZER = 8;

// --- DEFINICIÓN DE NOTAS (Frecuencias) ---
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_C5  523

// --- ARRAY 1: MELODÍA ---
// Aquí ponemos las notas en orden de aparición
int melodia[] = {
  NOTE_C4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C5, NOTE_G4,
  NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C5, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_D4
};

// --- ARRAY 2: DURACIONES ---
// Define el tiempo: 4 = negra, 8 = corchea, 2 = blanca, etc.
// 1000 dividido por este número da la duración en milisegundos.
int duraciones[] = {
  2, 2, 8, 8, 8, 2, 4,
  8, 8, 8, 2, 4, 8, 8, 8, 2
};

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
  // Calculamos el tamaño del array para saber cuántas veces repetir el bucle
  // sizeof(melodia) nos da el peso en bytes total
  // sizeof(int) nos da el peso de un solo número
  // Total / Uno = Cantidad de notas
  int numeroNotas = sizeof(melodia) / sizeof(int);

  for (int i = 0; i < numeroNotas; i++) {

    // 1. Calculamos la duración en milisegundos
    // Ejemplo: Si es 4 -> 1000/4 = 250ms
    int duracionNota = 1000 / duraciones[i];
    
    // 2. Tocamos la nota correspondiente a la posición 'i'
    tone(PIN_BUZZER, melodia[i], duracionNota);

    // 3. Generamos una pequeña pausa entre notas
    // Se suele usar la duración + 30% para que se distingan
    int pausa = duracionNota * 1.30;
    delay(pausa);
    
    // 4. Detenemos el sonido antes de la siguiente nota
    noTone(PIN_BUZZER);
  }
  
  // Esperamos 3 segundos en silencio antes de volver a empezar
  delay(3000); 
}