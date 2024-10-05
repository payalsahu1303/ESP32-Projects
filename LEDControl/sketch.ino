void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(33, INPUT); // pin 33 is input
  pinMode(12, OUTPUT); // LED 1
  pinMode(14, OUTPUT); // LED 2
  pinMode(27, OUTPUT); // LED 3
  pinMode(26, OUTPUT); // LED 4
}

void loop() {
  
  int pin = analogRead(33);
  Serial.println(pin);
  digitalWrite(12, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(26, HIGH);

  if(pin >= 500 && pin <= 1000){
    digitalWrite(12, LOW); 
  } else if (pin > 1000 && pin <= 2000){
    digitalWrite(14, LOW);
  } else if(pin > 2000 && pin <= 3000){
    digitalWrite(27, LOW);
  } else {
    digitalWrite(26, LOW);
  } 

  delay(100); // this speeds up the simulation
}


