#include <Ticker.h>
Ticker flipper;
const byte interruptPin = 14;  // D5 for wemos
bool state=true;
void flip(){
  if(state){
    analogWriteFreq(3000); // فرکانس 3kHz
    analogWrite(interruptPin, 716);  // 70% از 1023 ≈ 716
  }else{
    analogWrite(interruptPin, 0);

  }
  
  state=!state;
  flipper.attach(3, flip);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  Serial.println("start...");
  pinMode(interruptPin, OUTPUT);
  analogWrite(interruptPin, 0);
  flipper.attach(3, flip);

}

void loop() {
  // put your main code here, to run repeatedly:

}
