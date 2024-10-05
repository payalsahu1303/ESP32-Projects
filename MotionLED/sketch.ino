void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(25, INPUT);
  pinMode(18, OUTPUT);
}

void loop() {
  
  int motion = digitalRead(25);
  Serial.println(motion);
  digitalWrite(18, LOW);

  if(motion == HIGH){
    digitalWrite(18, HIGH); 
  }
  delay(10); // this speeds up the simulation
}


