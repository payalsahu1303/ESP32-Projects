# ESP32 Projects

This repository contains various projects that utilize the ESP32 microcontroller. Each project is well-documented with explanations, code, and wiring instructions. The ESP32 is a powerful and versatile microcontroller with built-in WiFi and Bluetooth capabilities, making it ideal for IoT applications.

## What is ESP32?

The **ESP32** is a low-cost, low-power system on a chip (SoC) that integrates Wi-Fi and dual-mode Bluetooth. It features a dual-core 32-bit CPU, which can be used to design complex IoT and embedded applications.

Key features:
- **CPU**: Dual-core Tensilica LX6, up to 240MHz
- **Wi-Fi**: 2.4 GHz, IEEE 802.11 b/g/n
- **Bluetooth**: Dual-mode Bluetooth (Classic and BLE)
- **GPIO**: 34 pins with various peripheral interfaces
- **Analog**: 18 channels of 12-bit ADC, 2 channels of 8-bit DAC
- **PWM**: Multiple channels for precise control of motors, lights, etc.
- **Communication**: UART, I2C, SPI, I2S, CAN

## Pinout Diagram

The table below provides the pinout details for the ESP32, including the general-purpose input/output (GPIO) pins, power pins, and various communication interfaces.

| **Pin**  | **Function**            | **Description**                                       |
|----------|-------------------------|-------------------------------------------------------|
| 3.3V     | Power                   | 3.3V power output                                     |
| GND      | Ground                  | Ground                                                |
| EN       | Enable                  | Chip enable (must be HIGH for normal operation)        |
| GPIO 1   | TX0                     | UART0 Transmit                                        |
| GPIO 3   | RX0                     | UART0 Receive                                         |
| GPIO 5   | GPIO / Output            | General-purpose IO / PWM                              |
| GPIO 12  | Touch4 / HSPI MISO       | Capacitive touch sensor (T4) / SPI MISO               |
| GPIO 13  | Touch5 / HSPI MOSI       | Capacitive touch sensor (T5) / SPI MOSI               |
| GPIO 14  | Touch6 / HSPI CLK        | Capacitive touch sensor (T6) / SPI Clock              |
| GPIO 15  | Touch3 / HSPI CS         | Capacitive touch sensor (T3) / SPI Chip Select        |
| GPIO 16  | GPIO / Wake-Up           | General-purpose IO / Wake from deep sleep             |
| GPIO 17  | GPIO                     | General-purpose IO                                    |
| GPIO 18  | VSPI CLK                 | SPI Clock                                             |
| GPIO 19  | VSPI MISO                | SPI MISO                                              |
| GPIO 21  | I2C SDA                  | I2C Data (SDA)                                        |
| GPIO 22  | I2C SCL                  | I2C Clock (SCL)                                       |
| GPIO 23  | VSPI MOSI                | SPI MOSI                                              |
| GPIO 25  | DAC1 / ADC2_8            | DAC Channel 1 / ADC2 Channel 8                        |
| GPIO 26  | DAC2 / ADC2_9            | DAC Channel 2 / ADC2 Channel 9                        |
| GPIO 27  | Touch7 / ADC2_7          | Capacitive touch sensor (T7) / ADC2 Channel 7         |
| GPIO 32  | Touch9 / ADC1_4          | Capacitive touch sensor (T9) / ADC1 Channel 4         |
| GPIO 33  | Touch8 / ADC1_5          | Capacitive touch sensor (T8) / ADC1 Channel 5         |
| GPIO 34  | ADC1_6                   | ADC1 Channel 6 (input only)                           |
| GPIO 35  | ADC1_7                   | ADC1 Channel 7 (input only)                           |
| GPIO 36  | ADC1_0                   | ADC1 Channel 0 (input only)                           |
| GPIO 39  | ADC1_3                   | ADC1 Channel 3 (input only)                           |
| VIN      | Power Input              | Power input for the board, typically 5V               |

### Notes:
- **GPIO pins**: These are general-purpose I/O pins. Some GPIOs have special functions such as ADC, DAC, and touch sensors.
- **Power pins**: `3.3V` for powering external components, and `GND` for ground connections.
- **Communication pins**: UART, SPI, I2C pins allow communication with external devices like sensors, displays, etc.
- **ADC/DAC pins**: These allow for reading analog inputs (ADC) or generating analog output signals (DAC).
