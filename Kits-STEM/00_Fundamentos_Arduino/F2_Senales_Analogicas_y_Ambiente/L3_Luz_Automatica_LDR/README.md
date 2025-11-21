# 🌙 Lección 3: Luz Automática (Sensor LDR)

Hasta ahora hemos controlado cosas manualmente. Pero, ¿cómo saben las luces de la calle cuándo encenderse? Usan un sensor de luz.

En esta lección usaremos una **Fotoresistencia (LDR)**. Es un componente que cambia su resistencia eléctrica dependiendo de cuánta luz le llegue.

> **💡 Contexto Xplorer:** En tu robot, este mismo código servirá para encender los faros automáticamente cuando entre en un túnel oscuro o debajo de una mesa.

---

## 🎯 Objetivos de Aprendizaje

1.  **Hardware:** Comprender el **Divisor de Tensión**. El LDR no funciona solo; necesita una resistencia de ayuda para que Arduino pueda leerlo.
2.  **Lógica de Programación:** Uso de **Umbrales (Thresholds)**. Decidir en qué número exacto decimos "ya está oscuro".
3.  **Calibración:** Aprender a ajustar el sensor según el ambiente real.

## 🔌 Materiales y Conexión

* 1 x Arduino Nano
* 1 x Fotoresistencia (LDR)
* 1 x Resistencia de **10kΩ** (Marrón-Negro-Naranja) -> *¡Crucial!*
* 1 x LED + Resistencia 220Ω

### Diagrama de Conexión (El Divisor de Tensión)
El LDR no tiene polaridad, pero la conexión es específica:

1.  Una pata del LDR va a **5V**.
2.  La otra pata del LDR va al Pin **A0**.
3.  **Y DESDE ESE MISMO PUNTO (A0)**, conectamos la Resistencia de 10kΩ hacia **GND**.
4.  El LED se conecta normal al Pin **D2**.



[Image of arduino ldr voltage divider connection diagram]


![Diagrama LDR](./Conexion_F2_L3.jpg)
*(Sube tu imagen con este nombre: Conexion_F2_L3.jpg)*

---

## 💻 Explicación del Código

El concepto clave aquí es el **Umbral (Threshold)**.
Arduino leerá un número (ej. 800 con luz, 300 con oscuridad). Nosotros decidimos el "punto de corte".
* `if (luz < 500)` -> Está oscuro -> **Encender**.
* `else` -> Hay luz -> **Apagar**.

---

## 🤖 Asistente Docente (Prompt para IA)

Copia y pega esto en Gemini para explicar la electrónica:

> "Hola Gemini, estamos viendo el sensor LDR.
> 1. Explícame de forma muy sencilla para niños qué es un 'Divisor de Tensión' y por qué el LDR necesita una resistencia amiga de 10k para funcionar. (Usa una analogía de tirar de una cuerda).
> 2. Si tapo el LDR con mi dedo, ¿el valor en el Monitor Serial debería subir o bajar? (Explica la relación Luz-Resistencia).
> 3. Dame 3 ejemplos de cosas en mi casa que podrían usar este sensor."

---

## 🚀 Reto para el Estudiante

**Misión:** "La Luz Nocturna Inteligente (Histéresis)"
A veces, al atardecer, la luz parpadea porque el sensor no se decide.
**Reto:** Modifica el código para que tenga dos umbrales:
* Que se encienda solo si baja de **400**.
* Que se apague solo si sube de **600**.
Esto evitará el parpadeo en la zona intermedia.

---
<div align="center">
    <b>Insani Robotics</b> - <i>Fundamentos de Ingeniería</i>
</div>