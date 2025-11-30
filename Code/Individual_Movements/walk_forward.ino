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
  myServo4.attach(4);

  myServo5.attach(5);

  myServo6.attach(6);

  myServo7.attach(7);

  myServo8.attach(8);

  myServo9.attach(9);

  myServo10.attach(10);

  myServo11.attach(11);

    delay(5000);
  myServo4.attach(4);
   myServo4.slowmove(90,255);
  myServo5.attach(5);
   myServo5.slowmove(45,255);
  myServo6.attach(6);
   myServo6.slowmove(90,255);
  myServo7.attach(7);
   myServo7.slowmove(135,255);
  myServo8.attach(8);
   myServo8.slowmove(90,255);
  myServo9.attach(9);
   myServo9.slowmove(45,255);
  myServo10.attach(10);
   myServo10.slowmove(90,255);
  myServo11.attach(11);
   myServo11.slowmove(135,255);
  delay(1000);
  myServo10.attach(10);
   myServo10.slowmove(115,255);
  myServo11.attach(11);
   myServo11.slowmove(85,255);
  myServo5.attach(5);
   myServo5.slowmove(95,255);
  delay(200);
  myServo10.attach(10);
   myServo10.slowmove(90,255);

}

void loop() {
    myServo8.attach(8);
     myServo8.slowmove(50,255);
    delay(200);
    myServo11.attach(11);
     myServo11.slowmove(135,255);
    myServo7.attach(7);
     myServo7.slowmove(75,255);
    myServo9.attach(9);
     myServo9.slowmove(90,255);
    myServo4.attach(4);
     myServo4.slowmove(60,255);
    myServo5.attach(5);
     myServo5.slowmove(45,255);
    myServo8.attach(8);
     myServo8.slowmove(90,255);
    delay(200);
    myServo4.attach(4);
     myServo4.slowmove(90,255);
    myServo10.attach(10);
     myServo10.slowmove(130,255);
    delay(200);
    myServo9.attach(9);
     myServo9.slowmove(45,255);
    myServo5.attach(5);
     myServo5.slowmove(105,255);
    myServo11.attach(11);
     myServo11.slowmove(90,255);
    myServo6.attach(6);
     myServo6.slowmove(120,255);
    myServo7.attach(7);
     myServo7.slowmove(135,255);
    myServo10.attach(10);
     myServo10.slowmove(90,255);
    delay(200);
    myServo6.attach(6);
     myServo6.slowmove(90,255);

}