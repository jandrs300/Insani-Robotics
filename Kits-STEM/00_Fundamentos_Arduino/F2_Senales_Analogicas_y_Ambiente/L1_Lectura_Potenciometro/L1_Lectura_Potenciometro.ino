/*
 * INSANI ROBOTICS - FUNDAMENTOS F2
 * Lección 1: Lectura de un Potenciómetro
 * ------------------------------------------------
 * Objetivo: Leer un valor analógico y mostrarlo en el PC.
 * * CONEXIÓN:
 * - Potenciómetro Pata 1 -> 5V
 * - Potenciómetro Pata 3 -> GND
 * - Potenciómetro Pata 2 (Centro) -> Pin A0
 */

// Definimos el pin (usamos A0 para entradas analógicas)
const int PIN_POTENCIOMETRO = A0;

// Variable para guardar el número que leemos
int valorLeido = 0;

void setup() {
  // Iniciamos la comunicación Serial a 9600 bits por segundo
  Serial.begin(9600);
  
  // Nota: Los pines analógicos (A0-A7) se configuran automáticamente como INPUT,
  // por lo que no es estrictamente necesario usar pinMode(), pero ayuda a leer el código.
  pinMode(PIN_POTENCIOMETRO, INPUT);
}

void loop() {
  // 1. LEER: Obtenemos el valor (entre 0 y 1023)
  valorLeido = analogRead(PIN_POTENCIOMETRO);
  
  // 2. MOSTRAR: Enviamos el dato al computador
  Serial.print("Valor actual: "); // Imprime texto sin salto de línea
  Serial.println(valorLeido);     // Imprime el valor CON salto de línea
  
  // 3. ESPERAR: Una pequeña pausa para poder leer los números
  delay(100); 
}