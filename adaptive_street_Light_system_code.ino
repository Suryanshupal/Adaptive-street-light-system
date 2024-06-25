// Define pins for LDR sensor, IR sensor, and LED
const int ldrPin = 7;   // LDR sensor connected to digital pin 7
const int irPin1 = 2;     // IR sensor connected to digital pin 2
const int irPin2 = 12;     // IR sensor connected to digital pin 12
const int irPin3 = 13;     // IR sensor connected to digital pin 13
const int ledPin1 = 9;    // relay1 pin1 connected to digital pin 9
const int ledPin2 = 10;    // relay1 pin2 connected to digital pin 10
const int ledPin3 = 11;    // relay1 pin3 connected to digital pin 11

const int dimLedPin1 = 6;  // relay2 pin1 connected to digital pin 9
const int dimLedPin2 = 5;  // relay2 pin1 connected to digital pin 9
const int dimLedPin3 = 3;  // relay2 pin1 connected to digital pin 9

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(irPin1, INPUT);
  pinMode(irPin2, INPUT);
  pinMode(irPin3, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(dimLedPin1, OUTPUT);
  pinMode(dimLedPin2, OUTPUT);
  pinMode(dimLedPin3, OUTPUT);
}

void loop() {
  int ldrValue = digitalRead(ldrPin);   // Read IR sensor value
  int irValue1 = digitalRead(irPin1);   // Read LDR sensor value
  int irValue2 = digitalRead(irPin2);   // Read LDR sensor value
  int irValue3 = digitalRead(irPin3);   // Read LDR sensor value

 if(ldrValue == HIGH){
    if(irValue1 == LOW){
      digitalWrite(ledPin1, true);
    }if(irValue2 == LOW){
      digitalWrite(ledPin2, true);
    }if(irValue3 == LOW){
      digitalWrite(ledPin3 ,true);
    }if(irValue1 == HIGH){
      digitalWrite(dimLedPin1,true);
    }if(irValue2 == HIGH){
      digitalWrite(dimLedPin2,true);
    }if(irValue3 == HIGH){
      digitalWrite(dimLedPin3,true);
    }
 }
 else{
    digitalWrite(ledPin1,LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,LOW);
 }
}
