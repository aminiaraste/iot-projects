#include <Ticker.h>
Ticker flipper;
int blinkCount = 0;
const int ledPin = LED_BUILTIN; // choose a pin for LED

void flip(){
  if(blinkCount<40){
    digitalWrite(ledPin, !digitalRead(ledPin));  // برعکس کردن وضعیت
    blinkCount++;

  }else{
  flipper.detach();
  }
  
  
}
void myBlink(){
  ESP.deepSleep(8*1e6); // 8 seconds
}
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  int pushButton = D3;
  pinMode(pushButton, INPUT);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pushButton), myBlink, RISING);
  blinkCount = 0;
  flipper.attach(0.5, flip);

}

void loop() {
  // put your main code here, to run repeatedly:

}
