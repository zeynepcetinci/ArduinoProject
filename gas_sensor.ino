int r = 10; 
int g = 9;
int b = 8; 
int gasSensor;
 
void setup() {
  Serial.begin (9600);
  pinMode(r, OUTPUT); 
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop() {
  gasSensor = analogRead(A0);
  if(gasSensor > 150){
    delay(50);
    analogWrite(r,0);
    analogWrite(g,255);
    analogWrite(b,255);
    delay(50);
    digitalWrite(13, HIGH);   
    delay(500);              
  }
  else{
    delay(50);
    analogWrite(r,255);
    analogWrite(g,0);
    analogWrite(b,255);
    digitalWrite(13, LOW);
    delay(50);
  }
  Serial.print("Gas= " );
  Serial.print(gasSensor);
  delay(500);
}
