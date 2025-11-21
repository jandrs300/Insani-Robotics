# ⚡ Fundamentos de Arduino y Electrónica (Insani Robotics)

Bienvenido al **Laboratorio de Conceptos** de Insani Robotics.

Antes de construir robots complejos, aquí construimos el **entendimiento**. Esta sección contiene una colección estructurada de lecciones diseñadas para dominar cada componente electrónico y concepto de programación de forma modular.

> **👨‍🏫 Nota para el Docente:**
> Este repositorio sigue una metodología progresiva: **Entradas/Salidas Digitales → Señales Analógicas → Actuadores → Sensores → Integración Inalámbrica.**
> Cada carpeta (F1, F2...) es una unidad didáctica completa.

---

## 🗺️ Malla Curricular (Índice de Módulos)

| Carpeta | Nivel | Temática Principal | Componentes Clave |
| :--- | :---: | :--- | :--- |
| **[📂 F1: Entradas/Salidas](./F1_Entradas_Salidas_Digitales)** | 🟢 1 | Lógica Binaria (0/1), Botones y Sensores Digitales. | LEDs, Pulsadores, PIR. |
| **[📂 F2: Mundo Analógico](./F2_Senales_Analogicas_y_Ambiente)** | 🟢 1 | Lectura de variables (0-1023) y Sensores de Luz. | Potenciómetro, LDR. |
| **[📂 F3: Color RGB](./F3_Led_RGB_Color)** | 🔵 2 | Mezcla de color, PWM y funciones. | LED RGB. |
| **[📂 F4: Neopixels](./F4_Neopixel_Tiras_Led)** | 🔵 2 | Tiras LED inteligentes, Librerías y Arrays visuales. | Tira WS2812B. |
| **[📂 F5: Servomotores](./F5_Servo_Motores)** | 🟠 3 | Control de movimiento preciso (ángulos) y multiejes. | Servos SG90/MG995. |
| **[📂 F6: Sonido](./F6_Sonido_Buzzer)** | 🟣 4 | Frecuencia, Tonos y Tiempos musicales. | Buzzer. |
| **[📂 F7: Ultrasonido](./F7_Ultrasonido_HCSR04)** | 🟣 4 | Medición de distancia y Ecolocalización. | Sensor HC-SR04. |
| **[📂 F8: Motores DC](./F8_Motores_DC_L293D)** | 🔴 5 | Potencia, Puentes H y Control de Velocidad. | Driver L293D, Motores TT. |
| **[📂 F9: Bluetooth](./F9_Comunicacion_Bluetooth)** | 🔴 5 | **INTEGRACIÓN FINAL:** Telemetría y App Control. | Módulo HC-05/HC-06. |

---

## 🛒 Lista de Materiales e Inventario

Para completar todas las lecciones de Fundamentos, necesitarás el siguiente material. Hemos marcado qué componentes ya vienen incluidos si adquieres el **Kit Xplorer**.

### 📦 Componentes Básicos (Kit Xplorer)
| Componente | Cantidad | Descripción |
| :--- | :---: | :--- |
| **Arduino Nano** (o Uno) | 1 | El cerebro de las prácticas. |
| **Protoboard** | 1 | Placa de pruebas para conexiones. |
| **Cables Jumper** | 20+ | Macho-Macho y Macho-Hembra. |
| **LED RGB** | 1 | Diodo de 4 patas (Cátodo Común). |
| **Buzzer** | 1 | Zumbador activo/pasivo. |
| **Sensor Ultrasonido** | 1 | Modelo HC-SR04. |
| **Driver L293D** | 1 | Chip Puente H para motores. |
| **Motores DC** | 2 | Motores amarillos con caja reductora. |
| **Módulo Bluetooth** | 1 | Modelo HC-05 o HC-06. |

### ⚠️ Componentes Extra (Laboratorio)
*Estos elementos son necesarios para las lecciones F1, F2, F4 y F5, ideales para equipar el laboratorio escolar:*

| Componente | Cantidad | Uso en Lecciones |
| :--- | :---: | :--- |
| **LEDs Simples** | 3 c/u | Rojo, Amarillo, Verde (Para semáforos y lógica). |
| **Resistencias** | Varias | 220Ω (para LEDs) y 10kΩ (para botones/LDR). |
| **Pulsadores** | 3 | Botones de 4 pines (Push-buttons). |
| **Potenciómetros** | 3 | De 10kΩ o 50kΩ (Perillas). |
| **Fotoresistencia** | 1 | Sensor LDR (Para detectar luz/oscuridad). |
| **Sensor PIR** | 1 | Sensor de movimiento HC-SR501. |
| **Servomotores** | 4 | Microservos SG90 (Para prácticas de brazos/pinzas). |
| **Tira Neopixel** | 1 | Tira/Anillo WS2812B (Mínimo 4 leds). |
| **Fuente 5V Externa**| 1 | Portapilas o Fuente USB (Para no sobrecargar el Arduino). |

---

## 🤖 Cómo planificar tus clases con IA (Gemini)

Este repositorio está optimizado para trabajar con Inteligencia Artificial. Copia y pega el siguiente prompt en tu asistente para generar una planificación instantánea:

> **PROMPT PARA EL DOCENTE:**
> "Actúa como un experto planificador curricular STEM. Analiza la estructura de carpetas de 'Fundamentos Arduino' de Insani Robotics (de F1 a F9).
> Tengo un semestre de **16 semanas** y estudiantes de **[EDAD] años**.
> 1. Crea un cronograma clase por clase, asignando tiempos para teoría y práctica.
> 2. Identifica qué materiales exactos debo solicitar al almacén para las primeras 4 semanas (Módulos F1 y F2).
> 3. Sugiere un proyecto integrador a mitad de semestre que combine F1, F2 y F3."

---

## 🛠️ Requisitos de Software

1.  **Arduino IDE:** [Descargar aquí](https://www.arduino.cc/en/software)
2.  **Drivers CH340:** (Si usas placas genéricas y tu PC no las reconoce).
3.  **Librerías Adicionales:**
    * `Adafruit NeoPixel` (Para Módulo F4)
    * `Servo` (Nativa, Para Módulo F5)
    * `SoftwareSerial` (Nativa, Para Módulo F9)

---
<div align="center">
    <p>Desarrollado con ❤️ en Loja, Ecuador por el equipo de <b>Insani Robotics</b></p>
    <p><i>"Tecnología que inspira, educación que transforma."</i></p>
</div>