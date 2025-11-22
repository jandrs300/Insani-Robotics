# 🦾 Fundamento 5: Movimiento Robótico (Servomotores)

Bienvenido a la robótica articulada. En este módulo aprenderemos a controlar el movimiento con precisión quirúrgica.

Un **Servomotor** no gira libremente como una rueda; gira a un ángulo específico (entre 0° y 180°) y se queda quieto ahí, manteniendo su posición con fuerza.

> **💡 Contexto Xplorer:**
> En tu robot Xplorer, usaremos un servo para girar el sensor de ultrasonido (la "cabeza"). Esto le permite al robot mirar a la izquierda y a la derecha antes de cruzar una calle, igual que un humano.

---

## 📂 Índice de Lecciones

| Lección | Título | Concepto Principal | Dificultad |
| :--- | :--- | :--- | :---: |
| **[📂 Lección 1](./L1_Limpiaparabrisas)** | **Barrido (Sweep)** | Mover el servo de 0° a 180° y volver (Librería `Servo.h`). | ⭐ |
| **[📂 Lección 2](./L2_Control_Knob)** | **Control Manual** | Usar un potenciómetro para controlar el ángulo en tiempo real. | ⭐⭐ |
| **[📂 Lección 3](./L3_Multi_Servos_Sincro)** | **Multi-Servos** | Controlar varios motores a la vez (Base para brazos robóticos). | ⭐⭐⭐ |

---

## 🛠️ Inventario del Módulo

* **1 x Arduino Nano**
* **1 x Micro Servo** (SG90 o MG90S).
* **1 x Potenciómetro** (Para la Lección 2).
* **Cables Jumper Macho-Macho**.

### ⚠️ Advertencia de Energía (¡LEER ANTES DE CONECTAR!)
* **1 Servo Pequeño (SG90):** Puedes conectarlo directo a los 5V del Arduino.
* **2 o más Servos (o servos grandes MG995):** 🛑 **¡PROHIBIDO conectar al Arduino!**
    * El Arduino no tiene fuerza suficiente para alimentar muchos motores. Si lo haces, se reiniciará o podrías quemar el regulador.
    * **Solución:** Usa una fuente externa de 5V (Baterías o cargador USB) y **comparte la tierra (GND)**.

---

## ⚙️ La Librería `Servo.h`

Afortunadamente, Arduino ya trae instalada una librería estándar para esto. No necesitas descargar nada nuevo, pero debes incluirla en tu código así:
`#include <Servo.h>`

---

## 🤖 Guía para el Docente (IA)

Prompt para explicar la diferencia entre Motor DC y Servo:

> **Copia y pega esto:**
> "Actúa como ingeniero mecánico. Voy a enseñar el módulo F5 (Servomotores).
> 1. Explícale a mis alumnos la diferencia entre un **Motor DC** (giro continuo) y un **Servomotor** (giro angular). Usa la analogía de un 'Ventilador' vs. un 'Codo humano'.
> 2. ¿Qué es el ciclo de trabajo (Duty Cycle) en la señal PWM que controla al servo? (Explicación sencilla).
> 3. Dame 3 ideas de proyectos que usen servos (ej. una barrera de peaje)."

---
<div align="center">
    <b>Insani Robotics</b> - <i>"Dando vida al movimiento"</i>
</div>