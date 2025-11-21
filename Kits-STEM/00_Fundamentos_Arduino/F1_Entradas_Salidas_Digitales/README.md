# 🟢 Fundamento 1: Entradas y Salidas Digitales

Bienvenido al primer paso de la ingeniería robótica. En este módulo, aprenderemos el "idioma" básico del Arduino: **El Código Binario (0 y 1)**.

Antes de crear robots complejos, debemos dominar cómo enviar señales (Encender cosas) y cómo recibir señales (Leer botones o sensores).

> **💡 Concepto Clave:**
> En el mundo digital, solo existen dos estados:
> * **HIGH (1):** Hay voltaje (5V). Significa "Sí", "Encendido", "Verdadero".
> * **LOW (0):** No hay voltaje (0V/GND). Significa "No", "Apagado", "Falso".

---

## 📂 Índice de Lecciones

Este módulo está dividido en 4 prácticas progresivas. Te recomendamos seguirlas en orden.

| Lección | Título | Concepto Principal | Dificultad |
| :--- | :--- | :--- | :---: |
| **[📂 Lección 1](./L1_Hola_Mundo_Led)** | **Hola Mundo (LED)** | Configurar pines como `OUTPUT` y controlar tiempos. | ⭐ |
| **[📂 Lección 2](./L2_Boton_Interruptor)** | **El Interruptor** | Configurar pines como `INPUT` y leer botones. | ⭐⭐ |
| **[📂 Lección 3](./L3_Consola_Logica)** | **Consola de Control** | Manejar múltiples entradas y salidas a la vez. | ⭐⭐ |
| **[📂 Lección 4](./L4_Sensor_PIR)** | **Sensor de Movimiento** | Usar un sensor industrial (PIR) que funciona con lógica digital. | ⭐⭐⭐ |

---

## 🛠️ Inventario del Módulo

Para completar **todas** las lecciones de esta carpeta, asegúrate de tener:

* **1 x Placa Arduino** (Nano, Uno o Mega).
* **1 x Protoboard** y Cables Jumper.
* **3 x LEDs** (Varios colores).
* **3 x Resistencias 220Ω** (Para proteger los LEDs).
* **3 x Pulsadores** (Push-buttons de 4 pines).
* **3 x Resistencias 10kΩ** (Para configuración Pull-Down de botones).
* **1 x Sensor PIR HC-SR501** (Para la Lección 4).

---

## 🤖 Guía para el Docente (IA)

Si usas un asistente de IA (como Gemini) para preparar tu clase, usa este prompt para obtener una explicación teórica del módulo completo:

> **Copia y pega esto:**
> "Actúa como profesor de electrónica. Voy a enseñar el Módulo F1 (Entradas y Salidas Digitales).
> 1. Explícame la diferencia entre una señal **Digital** y una **Analógica** usando una analogía simple (ej. una rampa vs. una escalera).
> 2. ¿Por qué es importante definir en el `setup()` si un pin es `INPUT` o `OUTPUT`? ¿Qué pasa si me olvido?
> 3. Dame 3 ejemplos de la vida cotidiana que funcionen con electrónica digital pura (Encendido/Apagado)."

---

<div align="center">
    <b>Insani Robotics</b> - <i>"Donde empieza la lógica"</i>
</div>