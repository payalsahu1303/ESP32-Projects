# ESP32 DHT22 Temperature & Humidity Sensor Data Logging on ThingSpeak

This project demonstrates how to read temperature and humidity data from a DHT22 sensor using an ESP32 microcontroller and send the data to a ThingSpeak channel via WiFi. This setup is ideal for IoT applications where environmental data needs to be monitored and analyzed remotely.

## Components
- ESP32 Microcontroller
- DHT22 Temperature & Humidity Sensor
- Jumper wires

## Circuit Diagram
![circuit-diagram](https://github.com/user-attachments/assets/c28e763b-18c0-4af7-9fb2-58ebc215164e)

## Data Visualization
![thingspeak](https://github.com/user-attachments/assets/23fa10ce-bc80-4439-83ee-456b42ee7b96)

## Wiring Connections

| DHT22 Pin  | ESP32 Connection |
|------------|-------------------|
| VCC        | 3.3V             |
| Data       | GPIO 13          |
| GND        | GND              |

## Getting Started

### Prerequisites
- **Arduino IDE** with ESP32 Board Support installed.
- **DHT Library**: Install the [Adafruit DHT library](https://github.com/adafruit/DHT-sensor-library) through the Arduino Library Manager.
- **ThingSpeak Account**: Set up a free [ThingSpeak account](https://thingspeak.com/) and create a new channel with fields for temperature and humidity data.
- **WiFi Connection**: The code uses Wokwi simulator's default SSID (`Wokwi-GUEST`) with no password.

### Setup Instructions
1. Clone the repository
```bash
   git clone https://github.com/yourusername/your-repo-name.git
```
2. Open the code in the Arduino IDE
3. Update the `api_key` in the code with your ThingSpeak channel's API key
4. Connect the ESP32 and DHT22 sensor as per the connection table above.
5. Upload the code to your ESP32.
6. Open the Serial Monitor to verify sensor data and ThingSpeak updates.

## Important Notes
- Update Frequency: Data is sent every 10 seconds to comply with ThingSpeak’s rate limit (once every 15 seconds).
- Wokwi Setup: This code is optimized for the Wokwi simulator, using its default WiFi SSID Wokwi-GUEST.
