#include <WiFi.h> 
#include <DHT.h>
const char* ssid ="SSID";
const char* pwd = "PASS";

#define DHTPIN 12
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);

WiFiServer server(80);
 
void setup() {
  Serial.begin(115200);//Baud rate 9600
  
    dht.begin();
   
  // Connect to WiFi network
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, pwd); 
// 

    while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
 
  // Start the server
  server.begin();
  Serial.println("Server started");
 
  // Print the IP address
  Serial.print("Use this URL : ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());//nodemcu 
  Serial.println("/");
 
}
 
void loop() {
  
float h = dht.readHumidity();
float t = dht.readTemperature();
Serial.println("temp=");
Serial.println(t);
Serial.println("Hum=");
Serial.println(h);
   // Check if a client has connected
  WiFiClient client = server.available();
 
  // Read the first line of the request
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();
 
  // Match the request
 
 
  
   
   

   
  // Return the response
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); //  do not forget this one
  client.println("<!DOCTYPE HTML>");
  client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
  client.println("<link rel=\"icon\" href=\"data:,\">");
            
            
  client.print(" <h1> IoT Based Project </h1> ");
   
    
     client.print("<h2>TEMP: ");
     client.print(t);
     client.print("</h2>");
    client.print("<h2>HUMIDITY: ");
     client.print(h);
     client.print("</h2>");

     
      
   client.println("<html>");
 
   
  delay(500);
  
  
 
}
