# ⚙️ Lección 1: Marchas (Adelante y Atrás)

El chip L293D es el "cerebro muscular" del robot. Arduino le dice qué hacer usando señales débiles (5V, poca corriente) y el L293D le entrega a los motores energía fuerte (de las baterías).

Para controlar la dirección de un motor, usamos 2 pines de control. Dependiendo de cómo combinemos HIGH y LOW, el motor girará a un lado, al otro, o frenará.

> **💡 Contexto Xplorer:** Esta lección configura las funciones básicas de movimiento (`Adelante`, `Atras`, `Stop`) que usará tu robot para navegar por el mundo.

---

## 🎯 Objetivos de Aprendizaje

1.  **Electrónica:** Entender el funcionamiento del **Puente H**.
2.  **Lógica:** Aplicar la Tabla de Verdad (0,1 = Giro Derecha / 1,0 = Giro Izquierda).
3.  **Buenas Prácticas:** Crear funciones personalizadas (`void moverAdelante()`) para no repetir código.

## 🔌 Materiales y Conexión

* 1 x Arduino Nano.
* 1 x Driver L293D.
* 2 x Motores DC con caja reductora (Amarillos).
* 1 x Fuente de Energía Externa (Portapilas).

### Diagrama de Conexión (Basado en el Kit Xplorer)
Usaremos 4 pines digitales para controlar la dirección de los 2 motores.

* **Motor Izquierdo (M1):** Pines **D2** y **D3**.
* **Motor Derecho (M2):** Pines **D4** y **D5**.
* **Alimentación L293D:** Pin 8 del chip a Batería (+), Pines GND a Batería (-).

![Diagrama Motores](./Conexion_F8_L1.jpg)
*(Sube la imagen Conexion_4_Motores_DC.jpg con este nombre: Conexion_F8_L1.jpg)*

---

## 💻 Explicación del Código

La lógica es simple pero estricta. Para cada motor:

| Pin A | Pin B | Acción |
| :---: | :---: | :--- |
| HIGH | LOW | **Gira a un lado** |
| LOW | HIGH | **Gira al otro** |
| LOW | LOW | **Se detiene (Freno suave)** |
| HIGH | HIGH | **Se detiene (Freno fuerte - Corto)** |

En el código, crearemos funciones como `avanzar()` que ponen la combinación correcta en los 4 pines al mismo tiempo.

---

## 💾 Código Fuente: `01_Motor_Basico.ino`

    /*
     * INSANI ROBOTICS - FUNDAMENTOS F8
     * Lección 1: Control de Dirección (Puente H)
     * ------------------------------------------------
     * Objetivo: Mover dos motores DC en diferentes direcciones.
     * Pines: M1(2,3) y M2(4,5)
     */

    // --- CONFIGURACIÓN DE PINES ---
    // Motor Izquierdo (A)
    const int IN1 = 2;
    const int IN2 = 3;
    // Motor Derecho (B)
    const int IN3 = 4;
    const int IN4 = 5;

    void setup() {
      // Configuramos todos los pines de control como SALIDA
      pinMode(IN1, OUTPUT);
      pinMode(IN2, OUTPUT);
      pinMode(IN3, OUTPUT);
      pinMode(IN4, OUTPUT);
    }

    void loop() {
      // 1. IR ADELANTE (2 seg)
      moverAdelante();
      delay(2000);

      // 2. DETENERSE (1 seg)
      detenerMotores();
      delay(1000);

      // 3. IR ATRÁS (2 seg)
      moverAtras();
      delay(2000);

      // 4. DETENERSE (1 seg)
      detenerMotores();
      delay(1000);
      
      // 5. GIRO SOBRE EL EJE (Girar a la derecha)
      // Motor Izq avanza, Motor Der retrocede
      girarDerecha();
      delay(1000);
      
      detenerMotores();
      delay(1000);
    }

    // --- FUNCIONES AUXILIARES (Nuestra propia librería) ---

    void moverAdelante() {
      // Motor A: Avanza (HIGH, LOW)
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      // Motor B: Avanza (HIGH, LOW)
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }

    void moverAtras() {
      // Invertimos la lógica: (LOW, HIGH)
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }

    void detenerMotores() {
      // Apagamos todo (LOW, LOW)
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
    
    void girarDerecha() {
      // Para girar en el propio eje como un tanque:
      // Lado Izquierdo: AVANZA
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      // Lado Derecho: RETROCEDE
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }

---

## 🤖 Asistente Docente (Prompt para IA)

Copia esto en Gemini:

> "Hola Gemini.
> 1. Explica qué es un 'Puente H' (H-Bridge) usando un dibujo o esquema de 4 interruptores. ¿Por qué se llama 'H'?
> 2. Si mis motores giran al revés (el robot va para atrás cuando le digo adelante), ¿tengo que reescribir todo el código o hay una solución de hardware más fácil? (Invertir los cables del motor).
> 3. ¿Por qué es importante poner un tiempo de espera (delay) o detener los motores antes de cambiar de dirección bruscamente? (Inercia y picos de corriente)."

---

## 🚀 Reto para el Estudiante

**Misión:** "El Cuadrado Perfecto"
Programa el robot para que realice una trayectoria cuadrada en el suelo.
* Avanzar 2 segundos.
* Girar derecha 0.5 segundos.
* (Repetir 4 veces).
¿Lograste que llegue al mismo punto de inicio?

---
<div align="center">
    <b>Insani Robotics</b> - <i>Fundamentos de Ingeniería</i>
</div>