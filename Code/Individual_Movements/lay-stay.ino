#include <VarSpeedServo.h>

VarSpeedServo myServo4;

VarSpeedServo myServo5;

VarSpeedServo myServo6;

VarSpeedServo myServo7;

VarSpeedServo myServo8;

VarSpeedServo myServo9;

VarSpeedServo myServo10;

VarSpeedServo myServo11;


void setup() {
  delay(5000);

  myServo4.attach(4);

  myServo5.attach(5);

  myServo6.attach(6);

  myServo7.attach(7);

  myServo8.attach(8);

  myServo9.attach(9);

  myServo10.attach(10);

  myServo11.attach(11);

    myServo4.attach(4);
   myServo4.slowmove(90,255);
  myServo5.attach(5);
   myServo5.slowmove(90,255);
  myServo6.attach(6);
   myServo6.slowmove(90,255);
  myServo7.attach(7);
   myServo7.slowmove(90,255);
  myServo8.attach(8);
   myServo8.slowmove(90,255);
  myServo9.attach(9);
   myServo9.slowmove(90,255);
  myServo10.attach(10);
   myServo10.slowmove(90,255);
  myServo11.attach(11);
   myServo11.slowmove(90,255);
  delay(1000);

}

void loop() {
    for (int count = 0; count < 3; count++) {
      myServo4.attach(4);
       myServo4.slowmove(0,255);
      myServo6.attach(6);
       myServo6.slowmove(180,255);
      myServo8.attach(8);
       myServo8.slowmove(0,255);
      myServo10.attach(10);
       myServo10.slowmove(180,255);
      delay(1000);
      myServo4.attach(4);
       myServo4.slowmove(90,255);
      myServo6.attach(6);
       myServo6.slowmove(90,255);
      myServo8.attach(8);
       myServo8.slowmove(90,255);
      myServo10.attach(10);
       myServo10.slowmove(90,255);
      delay(1000);
    }

}