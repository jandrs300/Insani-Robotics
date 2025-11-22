# 🔊 Fundamento 6: Sonido y Frecuencias (Buzzer)

En este módulo le daremos "voz" a nuestro robot. Usaremos un componente piezoeléctrico llamado **Buzzer** (Zumbador).

El sonido no es más que aire vibrando. Si hacemos vibrar el buzzer 440 veces por segundo, escucharemos la nota "La". Si vibra 261 veces, escucharemos un "Do". ¡Arduino es un instrumento musical!

> **💡 Contexto Xplorer:**
> Un robot sin sonido es difícil de entender.
> * **1 Bip corto:** "Comando recibido".
> * **3 Bips rápidos:** "¡Cuidado! Obstáculo cerca".
> * **Tono descendente:** "Apagando sistemas".

---

## 📂 Índice de Lecciones

| Lección | Título | Concepto Principal | Dificultad |
| :--- | :--- | :--- | :---: |
| **[📂 Lección 1](./L1_Tonos_Simples)** | **Tonos Básicos** | Función `tone()` y relación Hertz-Sonido. | ⭐ |
| **[📂 Lección 2](./L2_Reproductor_Melodia)** | **Reproductor Musical** | Usar **Arrays** (Listas) para guardar canciones enteras. | ⭐⭐⭐ |

---

## 🛠️ Inventario del Módulo

* **1 x Arduino Nano**.
* **1 x Buzzer Pasivo** (Recomendado para hacer melodías).
    * *Nota:* Si usas un buzzer "Activo" (los que tienen una etiqueta pegada que dice 'REMOVE AFTER WASHING'), solo harán un pitido constante. Para música, necesitamos el "Pasivo".
* **Cables Jumper**.

### 🔌 Conexión Estándar
Usaremos el **Pin D8** como el estándar de audio en Insani Robotics.

---

## 🤖 Guía para el Docente (IA)

Prompt para explicar la física del sonido:

> **Copia y pega esto:**
> "Actúa como profesor de música y física.
> 1. Explícale a un niño qué es la **Frecuencia (Hertz)**. Usa la analogía de un columpio o de aletear las manos muy rápido.
> 2. Genera una tabla de frecuencias para la escala de Do Mayor (Do, Re, Mi, Fa, Sol, La, Si) en la 4ta octava.
> 3. ¿Por qué los perros pueden escuchar silbatos que los humanos no? (Rango audible)."

---
<div align="center">
    <b>Insani Robotics</b> - <i>"La voz de la tecnología"</i>
</div>