# IoT-Flame-Detector
A simple and efficient Fire Alarm System built using Arduino UNO, a Flame Sensor, Buzzer, and LED. This project detects fire or flame and immediately activates an alarm system to alert users.

# 🔥 Fire Alarm System using Arduino

## 🚀 Features
- Detects fire/flame using a flame sensor
- Automatic buzzer alert system
- LED indication during fire detection
- Easy Tinkercad simulation
- Beginner-friendly Arduino project

---

## 🛠️ Components Required
- Arduino UNO
- MQ2 Sensor Module
- Buzzer
- LED
- Breadboard
- Jumper Wires

---

## 🔌 Circuit Connections

### Flame Sensor
| Flame Sensor Pin | Arduino UNO |
|------------------|-------------|
| VCC              | 5V          |
| GND              | GND         |
| A0               |   A0        |

### Buzzer
| Buzzer Pin | Arduino UNO |
|------------|-------------|
| +          | D11         |
| -          | GND         |

### LED
| LED Pin | Arduino UNO |
|----------|-------------|
| +        | D13         |
| -        | GND         |

---
## ⚙️ Working Principle
- The flame sensor continuously checks for fire or flame.
- When fire is detected:
  - The buzzer turns ON
  - The LED glows
- When no fire is detected:
  - The buzzer and LED remain OFF

---
