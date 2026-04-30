# ESP8266 Smart Obstacle Detection System

This project is an IoT-based Smart Obstacle Detection System built using ESP8266 and an ultrasonic sensor. It measures the distance of nearby objects, detects obstacles, and provides real-time alerts along with cloud data visualization using ThingSpeak.

## 🚀 Features
- Real-time distance measurement using ultrasonic sensor
- Obstacle detection based on threshold distance
- LED alert system when obstacle is detected
- Data upload to ThingSpeak cloud
- Live graph monitoring (Distance + Status)

## 🧠 Working Principle
The ultrasonic sensor measures distance by sending sound waves and calculating the time taken for the echo to return. The ESP8266 processes this data:
- If distance ≤ threshold → Obstacle detected (Alert ON)
- If distance > threshold → Safe condition

The system sends:
- Distance → Field1
- Status (0/1) → Field2

to ThingSpeak for visualization.

## 🛠️ Components Used
- ESP8266 (NodeMCU)
- Ultrasonic Sensor (HC-SR04)
- LED / Buzzer
- Resistors
- Jumper wires

## 🌐 IoT Integration
Data is sent to ThingSpeak cloud where:
- Field1 → Distance graph
- Field2 → Obstacle detection status

## 🔌 Circuit Diagram

![Circuit Diagram]("Circuit_Diagram.png")

## 🎥 Demo Video
[Add your YouTube link here]

## 📂 Code
Arduino code is included in this repository.

## 📌 Future Improvements
- Real-time mobile notifications 
- WiFi-based remote monitoring dashboard
- Integration with smart vehicle system

## 📎 Author
Parth Patel
