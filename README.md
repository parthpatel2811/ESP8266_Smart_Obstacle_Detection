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
- If distance ≤ threshold (10 cm) → Obstacle detected (Alert ON)
- If distance > threshold (10 cm) → Safe condition

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

![Circuit Diagram](Circuit_Diagram.png)

## 🎥 Demo Video
[▶️ Watch Demo Video](https://youtu.be/xKgFostUFXQ)

## ⚙️ Setup Instructions

1. Connect components as per circuit diagram  
2. Install ESP8266 board in Arduino IDE
   Step-1: Open Arduino IDE
   Step-2: File > Preferences > Additional boards manager URLs(Paste below link here) 
   [ESP8266 board link](http://arduino.esp8266.com/stable/package_esp8266com_index.json))  
4. Add required libraries (ESP8266WiFi, ThingSpeak)  
5. Update WiFi credentials in code  
6. Upload code to ESP8266  
7. Monitor output on Serial Monitor  

## 📂 Code
Arduino code is included in this repository. 

## 📌 Future Improvements
- Real-time mobile notifications 
- WiFi-based remote monitoring dashboard
- Integration with smart vehicle system

## 📎 Author
Parth Patel
