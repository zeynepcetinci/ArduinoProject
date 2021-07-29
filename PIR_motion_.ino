int pirPin = 7; // PIR pin
int rPin = 2; // LED pin
int degerPirPin = 0;
int buzzerPin = 11;
void setup() {
  pinMode(pirPin, INPUT); 
  pinMode(rPin, OUTPUT); 
}
void loop() {
  degerPirPin = digitalRead(pirPin);
 if (degerPirPin == HIGH) {
    digitalWrite(rPin, HIGH);
    tone(buzzerPin,300);
    delay(500);
    }
  else{
    digitalWrite(rPin,LOW);
    noTone(buzzerPin);
  }
}
