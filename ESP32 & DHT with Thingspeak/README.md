# ESP32 DHT Sensor Data Logging to ThingSpeak

This project reads temperature and humidity data using a DHT11 sensor connected to an ESP32 microcontroller and sends the data to ThingSpeak for cloud storage and analysis.

![WhatsApp Image 2024-10-25 at 9 52 28 PM](https://github.com/user-attachments/assets/7c850865-ca32-4a74-88e5-25a3990c7359)

## Components Used
- **ESP32**: Microcontroller with WiFi capability.
- **DHT11 Sensor**: Measures temperature and humidity.
- **ThingSpeak**: Online platform to store and analyze IoT data.

## Code Explanation
This code uses WiFi and HTTPClient libraries to connect the ESP32 to a WiFi network and send data to ThingSpeak. The DHT11 sensor reads temperature and humidity, which are logged to the serial monitor and uploaded to ThingSpeak every 20 cycles.

### Key Parts of the Code

- **WiFi Setup**: Connects the ESP32 to a WiFi network using your SSID and password.
- **DHT11 Initialization**: Sets up the DHT11 sensor on the specified pin.
- **Data Logging Loop**: Reads temperature and humidity from the DHT11 sensor, displays them on the serial monitor, and sends them to ThingSpeak every 20 cycles.

### How to Use the Code

1. **Install Libraries**: Make sure to install the `WiFi` and `HTTPClient` libraries, and the `DHT` library if not already installed.
2. **Update WiFi Credentials**: Replace `SSID` and `PASS` with your WiFi network name and password.
3. **Insert ThingSpeak API Key**: Replace `"YOUR API KEY"` in the code with your ThingSpeak channel's write API key.
4. **Upload Code to ESP32**: Upload the code to the ESP32 via Arduino IDE or another preferred environment.
