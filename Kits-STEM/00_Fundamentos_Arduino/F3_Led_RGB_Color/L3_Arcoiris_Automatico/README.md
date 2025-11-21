# 🌈 Lección 3: Arcoíris Automático (Bucles For)

¿Te has preguntado cómo hacen los teclados "gamer" o las luces decorativas para cambiar de color tan suavemente? No es magia, es un algoritmo.

En esta lección aprenderemos a hacer **Fading** (Desvanecimiento). En lugar de cambiar de color de golpe, pasaremos por todos los tonos intermedios automáticamente usando matemáticas y bucles.

> **💡 Contexto Xplorer:** Muchos robots usan luces que "respiran" (suben y bajan de intensidad suavemente) para indicar que están en modo de espera ("Standby") o procesando datos.

---

## 🎯 Objetivos de Aprendizaje

1.  **Programación Avanzada:** Dominar el **Bucle `for`**. Aprender a decir: *"Repite esta acción 255 veces, aumentando 1 paso a la vez"*.
2.  **Algoritmos:** Entender la lógica de transición cruzada (Mientras un color sube, el otro baja).
3.  **Buenas Prácticas:** Escribir código limpio usando constantes en lugar de "números mágicos".

## 🔌 Materiales y Conexión

* 1 x Arduino Nano
* 1 x LED RGB (Con sus 3 resistencias).

### ⚠️ Diagrama de Conexión (Nueva Configuración Estándar)
Asegúrate de conectar los pines en el orden correcto para que los colores coincidan con el código:

* **Pata ROJA (R):** al Pin **D11** (PWM).
* **Pata AZUL (B):** al Pin **D10** (PWM).
* **Pata VERDE (G):** al Pin **D9** (PWM).
* **Pata Larga (-):** a GND.

*(Nota: No olvides las resistencias de 220Ω o 330Ω en cada pata de color).*

![Diagrama LED RGB](./Conexion_F3_L3.png)

---

## 💻 Explicación del Código

El secreto es el bucle `for`.

    for (int i = 0; i < 255; i++) {
      // Todo lo que escribamos aquí se repetirá 255 veces
    }

Para hacer un arcoíris fluido, dividimos el ciclo en 3 fases:
1.  **De Rojo a Verde:** El Rojo se apaga poco a poco (-1), el Verde se enciende (+1).
2.  **De Verde a Azul:** El Verde se apaga, el Azul se enciende.
3.  **De Azul a Rojo:** El Azul se apaga, el Rojo se enciende.

---

## 💾 Código Fuente: `03_Fading_Loop.ino`

> **Nota para el Docente:** Este código incluye mejoras de lógica para evitar parpadeos y saltos en la transición de colores.

    /*
     * INSANI ROBOTICS - FUNDAMENTOS F3
     * Lección 3: Arcoíris Automático (Fading RGB)
     * ------------------------------------------------
     * Objetivo: Transición fluida de colores (Spectrum).
     * Pines: Rojo=11, Azul=10, Verde=9
     */

    // --- CONSTANTES DE HARDWARE ---
    // Nueva configuración de pines Insani
    const int PIN_ROJO  = 11;
    const int PIN_AZUL  = 10;
    const int PIN_VERDE = 9;

    // --- CONFIGURACIÓN ---
    const int TIEMPO_ESPERA = 10; // Velocidad: Menor número = Más rápido
    const int BRILLO_MAX = 255;

    // --- PROTOTIPOS ---
    void establecerColor(int r, int g, int b);

    void setup() {
      pinMode(PIN_ROJO, OUTPUT);
      pinMode(PIN_VERDE, OUTPUT);
      pinMode(PIN_AZUL, OUTPUT);
    }

    void loop() {
      // FASE 1: De ROJO puro a VERDE puro
      // Rojo baja, Verde sube
      for (int i = 0; i < BRILLO_MAX; i++) {
        establecerColor(BRILLO_MAX - i, i, 0); // R, G, B
        delay(TIEMPO_ESPERA);
      }

      // FASE 2: De VERDE puro a AZUL puro
      // Verde baja, Azul sube
      for (int i = 0; i < BRILLO_MAX; i++) {
        establecerColor(0, BRILLO_MAX - i, i); 
        delay(TIEMPO_ESPERA);
      }

      // FASE 3: De AZUL puro a ROJO puro
      // Azul baja, Rojo sube
      for (int i = 0; i < BRILLO_MAX; i++) {
        establecerColor(i, 0, BRILLO_MAX - i);
        delay(TIEMPO_ESPERA);
      }
    }

    // Función auxiliar para enviar los valores a los pines
    void establecerColor(int r, int g, int b) {
      analogWrite(PIN_ROJO, r);
      analogWrite(PIN_VERDE, g); // Pin 9
      analogWrite(PIN_AZUL, b);  // Pin 10
    }

---

## 🤖 Asistente Docente (Prompt para IA)

Copia esto en Gemini para explicar la clase:

> "Hola Gemini, hoy vamos a ver el bucle 'for' con un LED RGB.
> 1. Explícale a un niño de 12 años qué es un bucle `for` usando la analogía de un profesor contando vueltas en una pista de atletismo.
> 2. En el código usamos `delay(TIEMPO_ESPERA)`. ¿Qué pasaría visualmente si quitamos esa línea?
> 3. Matemáticas: Si cada paso toma 10ms y hay 255 pasos por fase, y son 3 fases... ¿cuánto tiempo tarda en completarse el arcoíris entero?"

---

## 🚀 Reto para el Estudiante

**Misión:** "Modo Fiesta vs. Modo Relax"
Actualmente la variable `TIEMPO_ESPERA` es fija (10ms).
**Reto:** Conecta un **Potenciómetro** al Pin A0 y usa la función `map()` para cambiar la velocidad del arcoíris en tiempo real.
* Perilla a la izquierda = Cambio lento (Relax).
* Perilla a la derecha = Cambio rápido (Fiesta).

---
<div align="center">
    <b>Insani Robotics</b> - <i>Fundamentos de Ingeniería</i>
</div>