#include <Servo.h>
Servo S;
void setup() {
  Serial.begin(9600);
S.attach(A1);
}

void loop() {
  int Motor=Serial.parseInt();
  S.write(Motor);
  Serial.println(Motor);
 
 
}
