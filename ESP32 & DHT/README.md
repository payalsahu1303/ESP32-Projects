# ESP32 & DHT

This project uses an ESP32 microcontroller with a DHT11 sensor to measure and display real-time temperature and humidity on a web server. The ESP32 connects to a Wi-Fi network and hosts a web page accessible via the device’s IP address, where users can view the sensor data in a browser.

![Untitled video - Made with Clipchamp (3)](https://github.com/user-attachments/assets/f3f7f782-8397-4798-9c2d-df1aa6b33df2)

## Components
- **ESP32 Microcontroller**
- **DHT11 Sensor** (Temperature and Humidity)
- **Wi-Fi Network**

## Prerequisites
1. **Arduino IDE:** Ensure it’s installed on your computer.
2. **ESP32 Board Package:** Configure ESP32 board settings in Arduino IDE.
3. **DHT Library:** Install `DHT sensor library by Adafruit` through the Arduino Library Manager.

## Project Setup
1. **Wiring:**
   - Connect the DHT11 sensor’s data pin to GPIO12 on the ESP32.
   - Connect VCC and GND to the ESP32’s 3.3V and GND pins.

2. **Code Setup:**
   - Update the `ssid` and `pwd` variables with your Wi-Fi network's SSID and password.
   - Adjust the baud rate if needed.

## Code Walkthrough
- **WiFi Connection:** Connects the ESP32 to the specified Wi-Fi network and displays the IP address.
- **DHT Sensor:** Reads temperature and humidity values from the DHT11 sensor.
- **Web Server:** Hosts a web page on port 80, displaying the sensor data in HTML format.

## How to Use
1. **Upload the Code:** Upload the code to your ESP32 via the Arduino IDE.
2. **Connect to Wi-Fi:** The Serial Monitor will display the connection status. Once connected, note the IP address.
3. **Access Web Page:** Open a browser and enter the IP address (e.g., `http://192.168.1.xx/`) to view the temperature and humidity data.
