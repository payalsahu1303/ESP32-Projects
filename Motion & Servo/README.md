# Motion Sensor & Servomotor 

This project demonstrates how to control a servo motor with an ESP32 based on input from a motion sensor. The servo will rotate to 90 degrees when motion is detected, and return to 0 degrees when no motion is detected. The motion sensor is connected to pin 25, and the servo is controlled via pin 26.

https://github.com/user-attachments/assets/e812c813-445a-46cf-8566-f1df95af3239

## Components Used

- ESP32 microcontroller
- Servo motor
- PIR motion sensor
- Jumper wires
- Breadboard

## Libraries Required

- [ESP32Servo Library](https://github.com/jkb-git/ESP32Servo) - This library allows for controlling servos using the ESP32.

## Pin Configuration

- **Servo Motor Pin**: Pin 26
- **Motion Sensor Pin**: Pin 25

## Code Explanation

1. **Setup**:
    - The serial communication is initialized at 115200 baud rate for debugging purposes.
    - The servo motor is attached to pin 26, and its initial position is set to 0 degrees.
    - Pin 25 is configured as an input to read the signal from the motion sensor.

2. **Loop**:
    - The code continuously checks the motion sensor value.
    - If motion is detected (logic HIGH), the servo rotates to 90 degrees.
    - If no motion is detected (logic LOW), the servo returns to 0 degrees.
    - A small delay of 100ms is added to avoid excessive polling.

## How to Use

1. Install the [ESP32Servo](https://github.com/jkb-git/ESP32Servo) library in your Arduino IDE.
2. Upload the provided code to your ESP32.
3. Connect the motion sensor and servo motor as per the pin configuration.
4. Open the Serial Monitor at 115200 baud rate to see the real-time status.
