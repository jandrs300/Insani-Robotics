/*
 * INSANI ROBOTICS - FUNDAMENTOS F7
 * Lección 2: Alarma de Proximidad (Sensor de Parqueo)
 * ------------------------------------------------
 * Objetivo: Activar alarma visual y sonora si un objeto rompe el perímetro de seguridad.
 * Conexiones: Trig(12), Echo(11), Buzzer(8), LED(2).
 */

const int PIN_TRIG = 12;
const int PIN_ECHO = 11;
const int PIN_BUZZER = 8;
const int PIN_LED = 2;

// Umbral de decisión: Menos de esto activará la alarma
const int DISTANCIA_PELIGRO = 15; // cm

void setup() {
  Serial.begin(9600);
  
  // Configuración de Entradas y Salidas
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // --- PASO 1: OBTENER DISTANCIA ---
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  
  long duracion = pulseIn(PIN_ECHO, HIGH);
  int distancia = duracion * 0.0343 / 2;

  // Debugging: Ver distancia en el PC
  Serial.print("Objetivo a: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // --- PASO 2: EVALUAR PELIGRO ---
  // Verificamos que distancia sea > 0 para evitar falsos positivos (errores de lectura)
  if (distancia > 0 && distancia < DISTANCIA_PELIGRO) {
    
    // ¡ALERTA! Estamos muy cerca
    digitalWrite(PIN_LED, HIGH);   // Encender luz
    tone(PIN_BUZZER, 1000);        // Emitir tono de alerta (1 KHz)
    
  } else {
    
    // TODO SEGURO
    digitalWrite(PIN_LED, LOW);    // Apagar luz
    noTone(PIN_BUZZER);            // Apagar sonido
  }

  // Pequeña pausa para no saturar el sensor
  // Si ponemos un delay muy largo, el sistema reaccionará lento al choque.
  delay(100); 
}