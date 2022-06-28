#include <Servo.h>
Servo S;
void setup() {
  Serial.begin(9600);
S.attach(A1);
}

void loop() {

  S.write(180);
  delay(100);
  S.write(170);
  delay(100);
  S.write(160);
  delay(100);
  S.write(150);
  delay(100);
  S.write(140);
  delay(100);
  S.write(130);
  delay(100);
 
}
