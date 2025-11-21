/*
 * ---------------------------------------------------------
 * INSANI ROBOTICS - FUNDAMENTOS DE ARDUINO
 * F1_L4: Sensor de Movimiento (PIR)
 * Objetivo: Usar un sensor industrial simple.
 * ---------------------------------------------------------
 */

const int PIN_SENSOR = 2; // Pin del sensor PIR
const int PIN_ALARMA = 13; // LED integrado del Arduino

void setup() {
  pinMode(PIN_SENSOR, INPUT);
  pinMode(PIN_ALARMA, OUTPUT);
  Serial.begin(9600); // Para ver mensajes en PC
  
  Serial.println("Esperando calibración del sensor (10 seg)...");
  delay(10000); // El PIR necesita unos segundos para 'acostumbrarse' al ambiente
  Serial.println("Sensor ACTIVO");
}

void loop() {
  int movimiento = digitalRead(PIN_SENSOR);

  if (movimiento == HIGH) {
    digitalWrite(PIN_ALARMA, HIGH);
    Serial.println("¡ALERTA! Movimiento detectado");
    delay(2000); // Mantiene la alarma 2 segundos
  } else {
    digitalWrite(PIN_ALARMA, LOW);
  }
}