# 💫 Lección 3: Efecto "Auto Fantástico" (Animaciones)

¿Cómo hacemos que una luz parezca "moverse" a lo largo de la tira? Los LEDs no tienen patas para caminar.

El truco de la animación es simple: **Encender uno, esperar, apagarlo, y encender el siguiente.** Si lo hacemos rápido, el ojo humano cree que la luz se está desplazando.

En esta lección replicaremos el famoso escáner rojo del auto KITT (El Auto Fantástico).

> **💡 Contexto Xplorer:** Este efecto es perfecto para ponerlo en el frente de tu robot como una luz de "escaneo" mientras busca obstáculos con el sensor ultrasónico.

---

## 🎯 Objetivos de Aprendizaje

1.  **Lógica de Animación:** Entender la secuencia *Encender -> Esperar -> Apagar*.
2.  **Bucles Inversos:** Aprender a usar un bucle `for` que cuenta hacia atrás (`i--`).
3.  **Gestión de Estado:** Cómo limpiar la "basura" (luz residual) para que la animación se vea limpia.

## 🔌 Materiales y Conexión

* 1 x Arduino Nano
* 1 x Tira Neopixel.
* 1 x Resistencia 220Ω - 470Ω.

### Diagrama de Conexión
Igual que las lecciones anteriores.
* **DIN:** Pin **D6**.
* **VCC:** 5V.
* **GND:** GND.

![Diagrama Auto Fantastico](./Conexion_F4_L3.png)

---

## 💻 Explicación del Código

Para que la luz vaya y vuelva, necesitamos dos bucles:

**1. Ida (De izquierda a derecha):**
    
    for(int i = 0; i < NUM_LEDS; i++) {
      tira.setPixelColor(i, 255, 0, 0); // Prende Rojo
      tira.show();
      delay(100);
      tira.setPixelColor(i, 0, 0, 0);   // ¡Apaga el mismo LED!
    }

**2. Vuelta (De derecha a izquierda):**
Aquí el bucle es diferente. Empezamos en el último número y restamos.

    for(int i = NUM_LEDS - 1; i >= 0; i--) {
      // Misma lógica: Prender, Mostrar, Esperar, Apagar.
    }

*Nota:* Si olvidamos la línea de "Apagar" (`0,0,0`), la tira se llenaría de color en lugar de mover un punto.

---

## 🤖 Asistente Docente (Prompt para IA)

Copia esto en Gemini para explicar la clase:

> "Hola Gemini, hoy vamos a hacer animaciones con LEDs.
> 1. Explícale a los estudiantes por qué necesitamos **dos** bucles `for` separados (uno de ida y uno de vuelta) en lugar de uno solo.
> 2. ¿Qué significa `i--` en programación? (Decremento).
> 3. Reto matemático: Si tengo 8 LEDs y el delay es de 100ms. ¿Cuántos segundos tarda la luz en ir y volver una vez completa?"

---

## 🚀 Reto para el Estudiante

**Misión:** "La Estela del Cometa"
Actualmente, el punto de luz es muy corto (1 solo LED).
**Reto:** Modifica el código para que se enciendan **dos** LEDs a la vez (el `i` y el `i-1`) para que la luz parezca más larga, como un cometa con cola.

---
<div align="center">
    <b>Insani Robotics</b> - <i>Fundamentos de Ingeniería</i>
</div>