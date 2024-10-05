# Motion LED 

This Arduino project controls an LED based on motion detection using a digital motion sensor connected to pin 25. The LED is turned on when motion is detected and turned off otherwise.

https://github.com/user-attachments/assets/b6c6449e-fbcb-44f7-bbab-6f48eddb4c20

## Components
- 1x Arduino board (e.g., ESP32)
- 1x Motion sensor connected to pin 25
- 1x LED connected to pin 18
- Jumper wires
- Breadboard (optional)

## How It Works
1. The motion sensor is connected to pin 25 and read using `digitalRead()`.
2. If motion is detected (`motion == HIGH`), the LED connected to pin 18 is turned on.
3. If no motion is detected, the LED stays off.

The sensor readings are also printed to the serial monitor for debugging purposes.

## Code Explanation

### `void setup()`
- Initializes the serial communication at a baud rate of `115200`.
- Configures pin 25 as input for the motion sensor.
- Configures pin 18 as output for the LED.

### `void loop()`
- Reads the motion sensor value from pin 25.
- Prints the sensor value to the serial monitor.
- If motion is detected, the LED is turned on; otherwise, it remains off.
- A short delay (`delay(10)`) is used to smooth out the readings.

## Circuit Diagram
- Pin 25: Connected to the motion sensor's output pin.
- Pin 18: Connected to the positive leg of the LED (with a suitable resistor in series).

## Installation
1. Upload the code to your Arduino board.
2. Connect the components as per the circuit diagram.
3. Open the serial monitor to view the sensor readings.
