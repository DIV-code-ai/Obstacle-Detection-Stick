# Obstacle Detection Stick for the Visually Impaired

## Overview
This project is a prototype of an obstacle detection stick designed to help visually impaired users navigate safely. It uses an Arduino Uno and an HC-SR04 ultrasonic sensor to detect obstacles and alerts the user with a buzzer.

## Features
- Detects obstacles within 50 cm.
- Provides audio feedback through a buzzer.
- Simple, effective, and easy to build.

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Distance Sensor
- Piezo Buzzer
- Connecting wires
- (Optional) Battery or power source

## How It Works
The ultrasonic sensor measures the distance to the nearest object. If an object is detected within the threshold distance, the buzzer sounds to alert the user.

## Wiring Diagram
![Wiring Diagram] <img width="940" height="451" alt="image" src="https://github.com/user-attachments/assets/da0e0164-fb58-4497-975f-aca4d15b4dea" />

## Usage Instructions
1. Power the Arduino (via USB or battery).
2. The buzzer will beep when an obstacle is detected within 50 cm.
3. Use the stick to navigate and avoid obstacles based on the audio alerts.

## Code
The Arduino sketch (`magnificent_crift1.ino`) reads sensor data and controls the buzzer accordingly.

## How to Upload Code
1. Open the Arduino IDE.
2. Load `magnificent_crift1.ino`.
3. Connect your Arduino Uno.
4. Upload the code.

## License
This project is open-source and free to use.

---
