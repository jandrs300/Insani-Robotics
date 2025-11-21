# 🕯️ Lección 2: Dimmer (Control de Brillo)

En la lección anterior vimos números en la pantalla. Ahora usaremos esos números para controlar la realidad. Vamos a crear un regulador de luz (Dimmer), igual al que se usa en las casas inteligentes.

> **💡 Contexto Xplorer:** Este concepto es vital para tu robot. Es la misma lógica que usaremos para controlar la **velocidad** de los motores. Un robot no siempre va a máxima velocidad; a veces necesita ir lento para estacionarse.

---

## 🎯 Objetivos de Aprendizaje

1.  **Programación:** Entender la función `map()` para traducir rangos numéricos.
2.  **Concepto Técnico:** **PWM (Modulación por Ancho de Pulso)**. Cómo Arduino simula voltajes medios (como 2.5V) encendiendo y apagando el pin muy rápido.
3.  **Lógica:** Conectar una Entrada Analógica con una Salida PWM.

## 🔌 Materiales y Conexión

* 1 x Arduino Nano
* 1 x Potenciómetro (Pin A0)
* 1 x LED + Resistencia 220Ω (Pin D3)

### Diagrama de Conexión
**⚠️ IMPORTANTE:** El LED debe ir conectado a un pin digital marcado con el símbolo **`~`** (PWM). En el Nano, usaremos el **Pin D3**.

* **Potenciómetro:** Igual que la lección anterior (Señal a A0).
* **LED:** Pata larga al **Pin D3**, pata corta a GND (con resistencia).

![Diagrama Conexión Dimmer](./Conexion_F2_L2.jpg)
*(Sube tu imagen con este nombre: Conexion_F2_L2.jpg)*

---

## 💻 Explicación del Código

Aquí tenemos un problema matemático:
* El Potenciómetro nos da valores de **0 a 1023**.
* El LED (PWM) solo acepta valores de **0 a 255**.

Si le mandamos "1023" al LED, Arduino no entenderá. Necesitamos un "traductor".
* **`map(valor, min_entrada, max_entrada, min_salida, max_salida)`**: Esta función hace una regla de tres automática para convertir la escala.

---

## 🤖 Asistente Docente (Prompt para IA)

Copia y pega esto en Gemini para profundizar:

> "Hola Gemini, estoy enseñando la Lección F2-L2 (Dimmer PWM).
> 1. Explícame el concepto de PWM usando la analogía de un interruptor de luz que se prende y apaga tan rápido que el ojo humano solo ve un brillo tenue.
> 2. Hazme un ejercicio matemático sencillo para que los alumnos calculen: Si el potenciómetro está a la mitad (512), ¿qué valor (0-255) le enviará la función `map` al LED?
> 3. ¿Qué otros pines del Arduino Nano soportan PWM además del D3?"

---

## 🚀 Reto para el Estudiante

**Misión:** "El Control Invertido"
Actualmente, si giras a la derecha (sube el valor), el brillo aumenta.
**Reto:** Modifica la función `map()` para que funcione al revés: que al girar a la derecha, el LED se apague, y al girar a la izquierda, se encienda al máximo.
*(Pista: Mira los últimos dos números dentro del paréntesis del map).*

---
<div align="center">
    <b>Insani Robotics</b> - <i>Fundamentos de Ingeniería</i>
</div>