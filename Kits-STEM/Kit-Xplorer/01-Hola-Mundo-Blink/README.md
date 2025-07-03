# Lección 01: Hola Mundo - Parpadeo de un LED

En esta primera lección, vamos a escribir y cargar nuestro primer programa en el ESP32 para hacer que un LED parpadee. ¡Es el "Hola, Mundo" de la electrónica!

---

### 🎯 Objetivos de Aprendizaje

- Entender la estructura de un sketch de Arduino (`setup()` y `loop()`).
- Aprender a configurar un pin como salida digital.
- Usar `digitalWrite()` para encender/apagar el LED y `delay()` para crear pausas.

### 🛠️ Materiales Necesarios

- 1x Placa ESP32
- 1x Protoboard
- 1x LED de 5mm (cualquier color)
- 1x Resistencia de 220Ω (Rojo, Rojo, Marrón)
- 2x Cables Jumper Macho-Macho

###  wiring Diagrama de Conexiones

Conecta los componentes como se muestra en la siguiente imagen. La pata larga (ánodo) del LED se conecta a la resistencia, y la pata corta (cátodo) a GND.

![Diagrama de conexión del LED](./images/conexion_led.jpg)

### 💻 El Código

Puedes encontrar el código completo en la carpeta `codigo` o copiarlo desde aquí.

```cpp
// Lección 01: Hola Mundo Blink
// Definimos el pin donde está conectado el LED
const int ledPin = 23; // Puedes usar cualquier pin GPIO

void setup() {
  // Se ejecuta una vez cuando el ESP32 se enciende
  Serial.begin(115200); // Inicia la comunicación serial
  pinMode(ledPin, OUTPUT); // Configura el pin del LED como una salida
  Serial.println("¡Setup completado! El LED comenzará a parpadear.");
}

void loop() {
  // Este código se repite indefinidamente
  digitalWrite(ledPin, HIGH);   // Enciende el LED
  Serial.println("LED Encendido");
  delay(1000);                  // Espera 1 segundo (1000 milisegundos)
  digitalWrite(ledPin, LOW);    // Apaga el LED
  Serial.println("LED Apagado");
  delay(1000);                  // Espera 1 segundo
}