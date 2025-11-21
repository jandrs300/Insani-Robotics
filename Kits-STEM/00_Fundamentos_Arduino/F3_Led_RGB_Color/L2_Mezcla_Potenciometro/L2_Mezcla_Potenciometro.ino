/*
 * INSANI ROBOTICS - FUNDAMENTOS F3
 * Lección 2: Mezclador de Color con Potenciómetro
 * ------------------------------------------------
 * Objetivo: Transición suave entre Rojo y Azul.
 */

// Definición de Pines
const int PIN_POT = A0;
const int PIN_ROJO = 11;
const int PIN_VERDE = 9;
const int PIN_AZUL = 10;

void setup() {
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
  pinMode(PIN_AZUL, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 1. LEER: Valor del potenciómetro (0 a 1023)
  int lectura = analogRead(PIN_POT);
  
  // 2. CALCULAR:
  // Convertimos la lectura (0-1023) a un rango PWM (0-255)
  int intensidad = map(lectura, 0, 1023, 0, 255);
  
  // Lógica de Mezcla (Gradiente Rojo -> Azul)
  // El Azul sube conforme giramos la perilla
  int valorAzul = intensidad; 
  
  // El Rojo baja conforme giramos la perilla (Inverso)
  int valorRojo = 255 - intensidad;
  
  // El Verde lo dejamos apagado para esta práctica
  int valorVerde = 0;

  // 3. ACTUAR:
  establecerColor(valorRojo, valorVerde, valorAzul);
  
  // 4. DEBUG:
  // Sirve para ver la "magia" matemática en pantalla
  Serial.print("Pot: "); Serial.print(lectura);
  Serial.print(" | Rojo: "); Serial.print(valorRojo);
  Serial.print(" | Azul: "); Serial.println(valorAzul);
  
  delay(50); // Pequeña pausa para estabilidad
}

// Función auxiliar
void establecerColor(int r, int g, int b) {
  analogWrite(PIN_ROJO, r);
  analogWrite(PIN_VERDE, g);
  analogWrite(PIN_AZUL, b);
}