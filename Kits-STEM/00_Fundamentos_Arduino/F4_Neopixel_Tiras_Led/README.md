# 💫 Fundamento 4: Iluminación Inteligente (Neopixels)

Bienvenido a la iluminación digital avanzada. En el módulo anterior (F3) necesitábamos 3 cables para controlar 1 solo LED RGB. ¿Te imaginas el cableado para controlar 100 LEDs? Sería imposible.

Aquí usaremos la tecnología **WS2812B (Neopixel)**. Estos LEDs tienen un microchip dentro de cada uno, lo que nos permite conectar cientos de ellos en cadena usando **un solo cable de datos**.

> **💡 Concepto Clave:**
> * **Direccionamiento:** Cada LED tiene una dirección (0, 1, 2...). Podemos decirle: *"Oye LED número 5, ponte Rojo"* sin afectar a los demás.
> * **Librerías:** Usaremos código escrito por expertos (`Adafruit_NeoPixel`) para facilitar nuestro trabajo.

---

## 📂 Índice de Lecciones

| Lección | Título | Concepto Principal | Dificultad |
| :--- | :--- | :--- | :---: |
| **[📂 Lección 1](./L1_Un_Solo_Pixel)** | **Hola Neopixel** | Instalación de librería y encendido del primer píxel. | ⭐⭐ |
| **[📂 Lección 2](./L2_Tira_De_Colores)** | **Control de Tira** | Usar bucles `for` para pintar toda la tira led por led. | ⭐⭐⭐ |
| **[📂 Lección 3](./L3_Efecto_Auto_Fantastico)** | **Animaciones** | Crear movimiento de luz (Efecto Cylon / Scanner). | ⭐⭐⭐ |

---

## 🛠️ Inventario del Módulo

* **1 x Arduino Nano**
* **1 x Tira o Anillo Neopixel** (Modelo WS2812B). *Mínimo 4 LEDs.*
* **1 x Resistencia 220Ω o 470Ω** (Para proteger el pin de datos).
* **Cables Jumper**.

### ⚠️ Advertencia de Energía
* Si usas **pocos LEDs (menos de 8)**: Puedes alimentarlos con los 5V del Arduino.
* Si usas **muchos LEDs (tiras largas)**: NECESITAS una fuente de 5V externa. Si intentas encender 30 LEDs en blanco al máximo brillo con el Arduino, **quemarás el regulador de voltaje de la placa**.

---

## ⚙️ Requisito de Software: Instalar Librería

Para que estos códigos funcionen, DEBES instalar la librería en tu Arduino IDE:

1.  Abre Arduino IDE.
2.  Ve al menú: `Programa` > `Incluir Librería` > `Gestionar Librerías...`
3.  En el buscador escribe: **Adafruit NeoPixel**.
4.  Instala la última versión.

---

## 🤖 Guía para el Docente (IA)

Prompt para explicar cómo funcionan los datos en serie:

> **Copia y pega esto:**
> "Actúa como ingeniero de telecomunicaciones. Voy a enseñar el módulo F4 (Neopixels).
> 1. Explica cómo funciona el protocolo de 'un solo hilo' de los WS2812B. Usa la analogía de una fila de personas pasándose cubetas de agua o mensajes de oído a oído.
> 2. ¿Por qué es importante contar desde 0 en programación (Índice 0) y no desde 1?
> 3. Genera una idea de proyecto escolar usando una tira LED (ej. un semáforo de ruido para la biblioteca)."

---
<div align="center">
    <b>Insani Robotics</b> - <i>"Iluminando la creatividad"</i>
</div>