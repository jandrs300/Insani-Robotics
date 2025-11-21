# 💡 Lección 1: Hola Mundo (Tu primer LED)

Bienvenido al mundo de la electrónica. En esta lección haremos lo equivalente a decir "Hola" en un idioma nuevo: encender y apagar una luz controlando el tiempo.

> **💡 Contexto Xplorer:** Entender cómo encender un LED es la base para luego encender los faros delanteros de tu robot o las luces de freno.

---

## 🎯 Objetivos de Aprendizaje

1.  **Hardware:** Entender el circuito básico (Fuente -> LED -> Resistencia -> Tierra).
2.  **Programación:** Dominar `digitalWrite()` (Acción) y `delay()` (Tiempo).
3.  **Concepto:** ¿Qué significa HIGH (5V) y LOW (0V)?

## 🔌 Materiales y Conexión

* 1 x Arduino Nano
* 1 x LED (Cualquier color)
* 1 x Resistencia 220Ω (Rojo-Rojo-Marrón)
* Cables Jumper

### Diagrama de Conexión
Conecta el pin largo del LED (+) al Pin D2 y el corto (-) a GND pasando por la resistencia.

![Diagrama de conexión LED](./Conexion_L1_Led.png)

---

## 💻 Explicación del Código

Usamos el pin digital como un interruptor que podemos controlar por tiempo.

* **`pinMode(PIN, OUTPUT)`**: Prepara el pin para enviar voltaje.
* **`digitalWrite(PIN, HIGH)`**: Envía 5 voltios (Enciende).
* **`delay(1000)`**: Congela el Arduino por 1000 milisegundos (1 segundo).

---

## 🤖 Asistente Docente (Prompt para IA)

Copia esto en Gemini para explicar la clase:

> "Hola Gemini, estoy enseñando la Lección 1 (Hola Mundo LED).
> El código usa un LED en el pin 2.
> 1. Explícame con una analogía de tuberías de agua por qué necesitamos una resistencia para que el LED no se queme.
> 2. Si cambio el `delay(1000)` por `delay(100)`, ¿qué pasará visualmente? Explícalo para un niño.
> 3. Genera un pequeño quiz de 3 preguntas sobre qué es el Ánodo y el Cátodo."

---

## 🚀 Reto para el Estudiante

**Misión:** "S.O.S."
Modifica los tiempos del `delay` para enviar una señal de auxilio en código Morse:
* 3 parpadeos cortos (200ms)
* 3 parpadeos largos (1000ms)
* 3 parpadeos cortos (200ms)

---
<div align="center"><b>Insani Robotics</b> - <i>Fundamentos</i></div>