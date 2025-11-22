# 🔔 Lección 1: Tonos Simples (La Función Tone)

Hacer ruido es fácil, pero hacer música requiere precisión matemática.
Arduino tiene una función nativa llamada `tone()` que genera una señal eléctrica cuadrada vibrando a una velocidad específica.

En esta lección aprenderemos a controlar **Qué nota suena** (Frecuencia) y **Por cuánto tiempo** (Duración).

> **💡 Contexto Xplorer:** Usaremos esto para el claxon del carro o para emitir alertas de "Batería Baja".

---

## 🎯 Objetivos de Aprendizaje

1.  **Programación:** Dominar la función `tone(pin, frecuencia, duración)`.
2.  **Física:** Entender la relación entre **Hertz (Hz)** y el tono. (Número alto = Agudo, Número bajo = Grave).
3.  **Seguridad:** Aprender a usar `noTone()` para detener el sonido y evitar dolores de cabeza.

## 🔌 Materiales y Conexión

* 1 x Arduino Nano
* 1 x Resistor de 100 ohms
* 1 x Buzzer (Zumbador) - *Preferiblemente Pasivo*.

### Diagrama de Conexión
El buzzer suele tener polaridad (marcada con un + o una pata más larga).

* **Pata Larga (+):** al Pin **D8** (Estándar de Audio Insani).
* **Pata Corta (-):** a **GND**. (mediante un resistor).

![Diagrama Buzzer Simple](./Conexion_F6_L1.png)

---

## 💻 Explicación del Código

El comando principal es:
`tone(PIN, FRECUENCIA, DURACION);`

* **PIN:** Dónde conectaste el buzzer (8).
* **FRECUENCIA:** La nota musical en Hertz (ej. 440 es un LA).
* **DURACION:** (Opcional) Cuántos milisegundos debe sonar.

**¡Importante!** La función `tone` no detiene el código. Si escribes `tone` y luego `delay`, el sonido se mantendrá durante ese delay.

---

## 💾 Código Fuente: `01_Tonos_Simples.ino`

    /*
     * INSANI ROBOTICS - FUNDAMENTOS F6
     * Lección 1: Generación de Tonos
     * ------------------------------------------------
     * Objetivo: Hacer sonar la escala musical básica.
     * Pin Buzzer: D8
     */

    const int PIN_BUZZER = 8;

    // Frecuencias de las notas (Octava 4)
    const int NOTE_C4 = 262; // Do
    const int NOTE_D4 = 294; // Re
    const int NOTE_E4 = 330; // Mi
    const int NOTE_F4 = 349; // Fa
    const int NOTE_G4 = 392; // Sol
    const int NOTE_A4 = 440; // La
    const int NOTE_B4 = 494; // Si
    const int NOTE_C5 = 523; // Do (Agudo)

    void setup() {
      pinMode(PIN_BUZZER, OUTPUT);
    }

    void loop() {
      // Tocar la escala subiendo
      tocarNota(NOTE_C4);
      tocarNota(NOTE_D4);
      tocarNota(NOTE_E4);
      tocarNota(NOTE_F4);
      tocarNota(NOTE_G4);
      tocarNota(NOTE_A4);
      tocarNota(NOTE_B4);
      tocarNota(NOTE_C5);
      
      delay(1000); // Silencio de 1 segundo antes de repetir
    }

    // Función auxiliar para simplificar el código principal
    void tocarNota(int frecuencia) {
      tone(PIN_BUZZER, frecuencia); // Empieza a sonar
      delay(500);                   // Suena por medio segundo
      noTone(PIN_BUZZER);           // Calla
      delay(50);                    // Pequeña pausa entre notas para que no se mezclen
    }

---

## 🤖 Asistente Docente (Prompt para IA)

Copia esto en Gemini para profundizar en la clase:

> "Hola Gemini.
> 1. Crea un reto para los estudiantes: Deben modificar el código para que suene como una sirena de ambulancia (Alternar entre 800Hz y 1000Hz rápidamente usando un bucle).
> 2. Explica física básica: ¿Qué está pasando físicamente dentro del buzzer para que el aire se mueva? (Vibración de la membrana piezoeléctrica).
> 3. ¿Qué pasa si intento usar la función `tone()` en el pin 3 y en el pin 11 al mismo tiempo? (Limitación de timers de Arduino)."

---

## 🚀 Reto para el Estudiante

**Misión:** "La Alarma Nuclear"
Modifica la función `tocarNota` o el `loop` para crear un sonido que empiece grave y suba de tono rápidamente (como un silbido o una bomba cayendo).
*Pista: Usa un bucle `for` que aumente la frecuencia de 100 a 1000.*

---
<div align="center">
    <b>Insani Robotics</b> - <i>Fundamentos de Ingeniería</i>
</div>