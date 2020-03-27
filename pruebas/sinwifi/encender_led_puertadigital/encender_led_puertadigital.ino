int led1=5;

void setup() {
  pinMode(led1,OUTPUT);

}

void loop() {
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  delay(200);

}
