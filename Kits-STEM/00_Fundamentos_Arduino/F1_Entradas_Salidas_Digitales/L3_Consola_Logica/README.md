# 🎛️ Lección 3: Consola de Control (Lógica Múltiple)

¿Podemos hacer varias cosas a la vez? Vamos a construir un panel de control con 3 botones y 3 LEDs para entender la independencia de procesos.

> **💡 Contexto Xplorer:** Tu robot tendrá que mover dos motores y vigilar sensores al mismo tiempo. Esta práctica entrena tu cerebro para manejar múltiples pines.

---

## 🎯 Objetivos de Aprendizaje

1.  **Orden:** Mantener el código limpio usando variables claras.
2.  **Hardware:** Gestión de cableado complejo en Protoboard.
3.  **Lógica:** Relación directa Entrada -> Salida.

## 🔌 Materiales y Conexión

* 3 x LEDs (Rojo, Amarillo, Verde)
* 3 x Pulsadores
* Resistencias necesarias

### Diagrama de Conexión
* **LEDs:** Pines 10, 11, 12.
* **Botones:** Pines 3, 5, 7.

![Diagrama de conexión Consola](./Conexion_L3_Consola.png)

---

## 💻 Explicación del Código

Observa cómo el `loop()` ejecuta las instrucciones tan rápido que parece que todo sucede al mismo tiempo.
`digitalWrite(LED1, digitalRead(BTN1))` -> Esta línea lee y escribe en un solo paso.

---

## 🤖 Asistente Docente (Prompt para IA)

Copia esto en Gemini:

> "Hola Gemini, tengo un circuito con 3 botones y 3 LEDs.
> 1. Propón un reto de 'Lógica Combinada': Que el LED 3 solo se encienda si presiono el Botón 1 Y el Botón 2 al mismo tiempo (Compuerta AND).
> 2. Explícame qué es un 'Array' y cómo podría servirnos si tuviéramos 10 botones en lugar de 3.
> 3. Diseña un juego de memoria visual (Simón Dice) teórico con estos componentes."

---

## 🚀 Reto para el Estudiante

**Misión:** "Sistema de Seguridad Nuclear"
Modifica el código para que el LED Rojo (Alarma) **solo** se encienda si presionas los 3 botones al mismo tiempo. Si falta uno, no debe encender.

---
<div align="center"><b>Insani Robotics</b> - <i>Fundamentos</i></div>