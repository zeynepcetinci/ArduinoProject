#include <NewPing.h>

int trigPin = 4;
int echoPin = 3;
int maxDistance = 200;  
int ledPin = 2;
float distance;
// NewPing setup of pins and maximum distance.
NewPing sonar(trigPin, echoPin, maxDistance);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
}
void loop() {
  distance = sonar.ping_cm();
  if (distance >= 200 || distance <= 2) {
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
