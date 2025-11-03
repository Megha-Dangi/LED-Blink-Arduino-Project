# 💡 LED Blink Arduino Project

This project demonstrates a simple LED blinking circuit using an *Arduino UNO*.

---

## 🧠 Overview
The LED is connected to digital pin 13, and it turns ON and OFF with a delay of 1 second.  
This is one of the basic Arduino examples to get started with microcontroller programming.

---

## ⚙ Components Required
- Arduino UNO
- LED (any color)
- 220Ω Resistor
- Breadboard & Jumper Wires

---

## 🔌 Circuit Connection
| Arduino Pin | Connection |
|--------------|-------------|
| 13 | LED Anode (+) |
| GND | LED Cathode (–) via 220Ω resistor |

---

## 🧾 Code Summary
The program sets pin 13 as an output and continuously toggles it HIGH and LOW with a 1-second delay.

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
