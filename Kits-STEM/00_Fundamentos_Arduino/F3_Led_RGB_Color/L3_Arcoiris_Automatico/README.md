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
* 1 x LED RGB.

### ⚠️ Diagrama de Conexión (Nueva Configuración Estándar)
Asegúrate de conectar los pines en el orden correcto para que los colores coincidan con el código:

* **Pata ROJA (R):** al Pin **D11** (PWM).
* **Pata AZUL (B):** al Pin **D10** (PWM).
* **Pata VERDE (G):** al Pin **D9** (PWM).
* **Pata Larga (-):** a GND.

*(Nota: No olvides las resistencias de 220Ω o 330Ω).*

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