#include <Ticker.h>
Ticker t1;
Ticker t2;
const byte interruptPin = D3;
const int ledTow=D4;
const int ledThree=D5;
int count=0;
void flipFirst(){
  int state =digitalRead(ledTow);
  digitalWrite(ledTow,!state);
}
void flipSecond(){
  if(count==2){
    digitalWrite(ledThree,LOW);
    count=0;
  }else{
    digitalWrite(ledThree,HIGH);
    count++;
  }
}
void myBlink(){
  t1.attach(2,flipFirst);
  t2.attach(1,flipSecond);
}
void stop(){
  t1.detach();
  t2.detach();
  digitalWrite(ledTow, LOW);
  digitalWrite(ledThree, LOW);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(interruptPin, INPUT);
  pinMode(ledTow, OUTPUT);
  digitalWrite(ledTow, LOW);
  pinMode(ledThree, OUTPUT);
  digitalWrite(ledThree, LOW);
  myBlink();
  attachInterrupt(digitalPinToInterrupt(interruptPin), stop, RISING);

}

void loop() {
  // put your main code here, to run repeatedly:

}
