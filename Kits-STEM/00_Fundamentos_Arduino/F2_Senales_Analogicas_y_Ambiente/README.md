# 🟠 Fundamento 2: Señales Analógicas y Ambiente

Bienvenidos al mundo de los matices. A diferencia del mundo digital (0 o 1), el mundo real es continuo. La luz del sol no se "apaga" de golpe, disminuye poco a poco.

En este módulo aprenderemos a leer voltajes variables (de 0 a 5 Voltios) y a convertirlos en números que Arduino entienda (0 a 1023).

> **💡 Concepto Clave:**
> * **Entrada Analógica (ADC):** Arduino mide el voltaje y nos da un número entre 0 (0V) y 1023 (5V).
> * **PWM (Salida Pseudo-Analógica):** Truco para simular voltajes intermedios en LEDs y Motores (0 a 255).

---

## 📂 Índice de Lecciones

| Lección | Título | Concepto Principal | Dificultad |
| :--- | :--- | :--- | :---: |
| **[📂 Lección 1](./L1_Lectura_Potenciometro)** | **El Potenciómetro** | Leer una perilla y ver los datos en el Monitor Serial. | ⭐ |
| **[📂 Lección 2](./L2_Dimmer_LED_PWM)** | **Dimmer de Luz** | Controlar la intensidad de un LED (Entrada Analógica -> Salida PWM). | ⭐⭐ |
| **[📂 Lección 3](./L3_Luz_Automatica_LDR)** | **Luz Automática** | Usar una Fotoresistencia (LDR) para detectar oscuridad. | ⭐⭐⭐ |

---

## 🛠️ Inventario del Módulo

* **1 x Arduino Nano**
* **1 x Protoboard**
* **1 x Potenciómetro** (10kΩ o similar).
* **1 x Fotoresistencia (LDR)**.
* **1 x Resistencia 10kΩ** (Para el divisor de tensión del LDR).
* **1 x LED** + Resistencia 220Ω.

---

## 🤖 Guía para el Docente (IA)

Prompt para explicar la conversión Analógico-Digital (ADC):

> **Copia y pega esto:**
> "Actúa como profesor de matemáticas y tecnología.
> 1. Explícame qué es el ADC (Convertidor Analógico Digital) de Arduino usando una analogía de una regla de medir que solo tiene 1024 rayitas.
> 2. ¿Por qué si el potenciómetro me da un valor de hasta 1023, la salida PWM del LED solo acepta hasta 255? (Explica la función `map`).
> 3. Dame 3 ejemplos de sensores analógicos que se usan en la industria (ej. sensor de temperatura)."

---
<div align="center"><b>Insani Robotics</b></div>