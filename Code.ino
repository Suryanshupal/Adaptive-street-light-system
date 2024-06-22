// Define pins for LDR sensor, IR sensor, and LED
const int ldrPin = 7;   // LDR sensor connected to digital pin 7
const int irPin1 = 2;     // IR sensor connected to digital pin 2
const int irPin2 = 12;     // IR sensor connected to digital pin 12
const int irPin3 = 13;     // IR sensor connected to digital pin 13
const int ledPin1 = 9;    // LED connected to digital pin 9
const int ledPin2 = 10;    // LED connected to digital pin 10
const int ledPin3 = 11;    // LED connected to digital pin 11

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(irPin1, INPUT);
  pinMode(irPin2, INPUT);
  pinMode(irPin3, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  int ldrValue = digitalRead(ldrPin);   // Read IR sensor value
  int irValue1 = digitalRead(irPin1);   // Read LDR sensor value
  int irValue2 = digitalRead(irPin2);   // Read LDR sensor value
  int irValue3 = digitalRead(irPin3);   // Read LDR sensor value

 if(ldrValue == HIGH){
    if(irValue1 == LOW){
      analogWrite(ledPin1, 500);
    }if(irValue2 == LOW){
      analogWrite(ledPin2, 500);
    }if(irValue3 == LOW){
      analogWrite(ledPin3 ,500);
    }if(irValue1 == HIGH){
      analogWrite(ledPin1,10);
    }if(irValue2 == HIGH){
      analogWrite(ledPin2,10);
    }if(irValue3 == HIGH){
      analogWrite(ledPin3,10);
    }
 }
 else{
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
 }
}
