# 🦇 Fundamento 7: Sensores de Distancia (Ultrasonido)

¿Cómo sabe un murciélago dónde está la pared si vuela en la oscuridad? Usa el sonido.
Envía un grito ("¡Hola!") y cuenta cuánto tiempo tarda en escuchar el eco.

El sensor **HC-SR04** hace exactamente lo mismo. Envía un sonido ultrasónico (que los humanos no oímos), espera el rebote y calcula la distancia con matemáticas.

> **💡 Contexto Xplorer:**
> Estos son los "ojos" de tu robot.
> * Si distancia < 15cm: **¡Frenar!**
> * Si distancia > 15cm: **Avanzar.**

---

## 📂 Índice de Lecciones

| Lección | Título | Concepto Principal | Dificultad |
| :--- | :--- | :--- | :---: |
| **[📂 Lección 1](./L1_Metro_Digital)** | **Metro Digital** | Leer el sensor y convertir "tiempo" en "centímetros". | ⭐⭐ |
| **[📂 Lección 2](./L2_Alarma_Proximidad)** | **Sensor de Parqueo** | Crear un sistema de alarma que pita más rápido al acercarse. | ⭐⭐⭐ |

---

## 🛠️ Inventario del Módulo

* **1 x Arduino Nano**.
* **1 x Sensor HC-SR04** (Parecen dos ojitos/parlantes).
* **1 x Buzzer** (Para la Lección 2).
* **1 x LED** (Para la Lección 2).
* **Cables Jumper Macho-Hembra** (Generalmente necesarios para conectar el sensor a la protoboard).

### 🔌 Conexión Estándar
El sensor tiene 4 pines:
1.  **VCC:** 5V.
2.  **GND:** Tierra.
3.  **Trig (Trigger/Gatillo):** Es el pin que "Grita".
4.  **Echo (Eco):** Es el pin que "Escucha".

*Para facilitar los códigos, usaremos:*
* **Trig:** Pin **D12**
* **Echo:** Pin **D11**

---

## ⚙️ Concepto Físico: Velocidad del Sonido

Para calcular la distancia, usamos la fórmula:
$$Distancia = \frac{Tiempo \times Velocidad}{2}$$

* **Velocidad del sonido:** 343 metros por segundo.
* **Dividimos por 2:** Porque el sonido tiene que **ir** hasta la pared y **volver** (viaje redondo).

---

## 🤖 Guía para el Docente (IA)

Prompt para explicar la física detrás del sensor:

> **Copia y pega esto:**
> "Actúa como profesor de física. Estoy enseñando el sensor HC-SR04.
> 1. Explica el concepto de 'Ecolocalización' usando una analogía de lanzar una pelota de tenis contra una pared.
> 2. ¿Por qué dividimos el tiempo entre 2 en la fórmula de distancia?
> 3. ¿Qué pasa si intento medir la distancia contra una cortina de tela o una esponja? (Absorción del sonido)."

---
<div align="center">
    <b>Insani Robotics</b> - <i>"Tecnología que percibe el mundo"</i>
</div>