# LED Control

This Arduino project reads an analog signal from potentiometer and controls four LEDs based on the value of the input. The LEDs are connected to pins 12, 14, 27, and 26.

https://github.com/user-attachments/assets/86e1f3eb-e27e-4f24-b248-7d6b5a11551e

## Hardware Requirements

- Arduino board (ESP32 or similar)
- 4 LEDs
- Potentiometer
- Resistors for each LED
- Jumper wires
- Breadboard

## Pin Configuration

| Pin  | Function  |
|------|-----------|
| 33   | Analog Input (potentiometer) |
| 12   | LED 1 (output) |
| 14   | LED 2 (output) |
| 27   | LED 3 (output) |
| 26   | LED 4 (output) |

## How it Works

1. The analog input is read from pin 33 using `analogRead()`.
2. The value of the input is printed to the serial monitor.
3. Depending on the range of the input value, one of the LEDs is turned off while the others remain on:
   - **500 ≤ pin value ≤ 1000:** LED 1 is turned off.
   - **1000 < pin value ≤ 2000:** LED 2 is turned off.
   - **2000 < pin value ≤ 3000:** LED 3 is turned off.
   - **Otherwise:** LED 4 is turned off.
