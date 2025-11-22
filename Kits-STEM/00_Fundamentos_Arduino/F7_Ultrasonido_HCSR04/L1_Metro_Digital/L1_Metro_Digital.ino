/*
 * INSANI ROBOTICS - FUNDAMENTOS F7
 * Lección 1: Medidor de Distancia (Metro Digital)
 * ------------------------------------------------
 * Objetivo: Leer el sensor HC-SR04 y mostrar centímetros en el Monitor Serial.
 */

const int PIN_TRIG = 12;
const int PIN_ECHO = 11;

void setup() {
  // Iniciamos comunicación con el PC
  Serial.begin(9600);
  
  // Configuración de pines
  pinMode(PIN_TRIG, OUTPUT); // El que grita
  pinMode(PIN_ECHO, INPUT);  // El que escucha
}

void loop() {
  // PASO 1: Generar el pulso ultrasónico (Grito)
  // Primero aseguramos que esté apagado
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(2);
  
  // Enviamos un pulso de 10 microsegundos
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  
  // PASO 2: Leer el tiempo de rebote (Eco)
  // pulseIn espera a que el pin ECHO se ponga en HIGH y cuenta el tiempo
  long duracion = pulseIn(PIN_ECHO, HIGH);
  
  // PASO 3: Convertir tiempo a distancia
  // Velocidad del sonido en el aire = 343 m/s = 0.0343 cm/µs
  // Dividimos por 2 porque el tiempo es de ida y vuelta
  int distancia = duracion * 0.0343 / 2;
  
  // PASO 4: Mostrar en pantalla
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  
  // Esperamos un poco antes de la siguiente medición
  delay(100);
}