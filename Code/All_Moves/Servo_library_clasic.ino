#include <Servo.h>

// Declarație servomotoare
Servo myServo4;
Servo myServo5;
Servo myServo6;
Servo myServo7;
Servo myServo8;
Servo myServo9;
Servo myServo10;
Servo myServo11;

void setup() {
  // Inițializare servomotoare
  myServo4.attach(4);
  myServo5.attach(5);
  myServo6.attach(6);
  myServo7.attach(7);
  myServo8.attach(8);
  myServo9.attach(9);
  myServo10.attach(10);
  myServo11.attach(11);
  
  // Pornire din poziția inițială
  startPosition();
  delay(5000); // Așteptare inițială
}

void loop() {
  // Secvență de mișcări
  walkForward();
  delay(1000);
  
  turnLeft();
  delay(1000);
  
  turnRight();
  delay(1000);
  
  dogAnimation();
  delay(1000);
  
  physicalExercise();
  delay(1000);
  
  legsLeftRight();
  delay(1000);
  
  legsInside();
  delay(1000);
  
  layStay();
  delay(1000);
  
  // Revenire la poziția inițială
  startPosition();
  delay(2000);
}

// ========== SEGMENT: Poziția inițială ==========
void startPosition() {
  myServo4.write(90);
  myServo5.write(90);
  myServo6.write(90);
  myServo7.write(90);
  myServo8.write(90);
  myServo9.write(90);
  myServo10.write(90);
  myServo11.write(90);
  delay(500);
}

// ========== SEGMENT: Mers înainte ==========
void walkForward() {
  // Configurare poziție de start pentru mers
  myServo5.write(45);
  myServo7.write(135);
  myServo9.write(45);
  myServo11.write(135);
  delay(1000);
  
  myServo10.write(115);
  myServo11.write(85);
  myServo5.write(95);
  delay(200);
  myServo10.write(90);

  // Ciclu de mers
  myServo8.write(50);
  delay(200);
  myServo11.write(135);
  myServo7.write(75);
  myServo9.write(90);
  myServo4.write(60);
  myServo5.write(45);
  myServo8.write(90);
  delay(200);
  myServo4.write(90);
  myServo10.write(130);
  delay(200);
  myServo9.write(45);
  myServo5.write(105);
  myServo11.write(90);
  myServo6.write(120);
  myServo7.write(135);
  myServo10.write(90);
  delay(200);
  myServo6.write(90);
}

// ========== SEGMENT: Viraj la stânga ==========
void turnLeft() {
  for (int count = 0; count < 5; count++) {
    myServo5.write(45);
    delay(500);
    myServo9.write(45);
    delay(500);
    myServo6.write(120);
    myServo7.write(180);
    delay(500);
    myServo6.write(90);
    delay(250);
    myServo10.write(120);
    myServo11.write(180);
    delay(250);
    myServo10.write(90);
    delay(500);
    myServo5.write(5);
    myServo7.write(135);
    myServo9.write(5);
    myServo11.write(135);
    delay(500);
  }
  
  // Revenire la poziția normală
  myServo5.write(90);
  myServo7.write(90);
  myServo9.write(90);
  myServo11.write(90);
}

// ========== SEGMENT: Viraj la dreapta ==========
void turnRight() {
  for (int count = 0; count < 5; count++) {
    myServo7.write(135);
    delay(500);
    myServo11.write(135);
    delay(500);
    myServo4.write(60);
    myServo5.write(0);
    delay(500);
    myServo4.write(90);
    delay(250);
    myServo8.write(60);
    myServo9.write(0);
    delay(250);
    myServo8.write(90);
    delay(500);
    myServo5.write(45);
    myServo7.write(175);
    myServo9.write(45);
    myServo11.write(175);
    delay(500);
  }
  
  // Revenire la poziția normală
  myServo5.write(90);
  myServo7.write(90);
  myServo9.write(90);
  myServo11.write(90);
}

// ========== SEGMENT: Animație câine ==========
void dogAnimation() {
  for (int count = 0; count < 3; count++) {
    myServo5.write(0);
    myServo7.write(180);
    myServo9.write(20);
    myServo11.write(160);
    delay(1000);
    
    myServo4.write(20);
    myServo6.write(160);
    delay(500);
    
    for (int innerCount = 0; innerCount < 3; innerCount++) {
      myServo9.write(40);
      myServo11.write(180);
      delay(500);
      myServo9.write(0);
      myServo11.write(140);
      delay(500);
    }
    
    myServo9.write(20);
    myServo11.write(160);
    myServo4.write(90);
    myServo6.write(90);
    delay(1000);
    
    myServo5.write(90);
    myServo7.write(90);
    myServo9.write(90);
    myServo11.write(90);
    delay(1000);
  }
}

// ========== SEGMENT: Exercițiu fizic ==========
void physicalExercise() {
  for (int count = 0; count < 3; count++) {
    myServo5.write(70);
    myServo7.write(110);
    myServo9.write(10);
    myServo11.write(170);
    delay(500);
    
    myServo8.write(20);
    myServo10.write(160);
    delay(1000);
    
    for (int innerCount = 0; innerCount < 3; innerCount++) {
      myServo4.write(30);
      myServo6.write(150);
      delay(500);
      myServo4.write(90);
      myServo6.write(90);
      delay(500);
    }
    
    myServo8.write(90);
    myServo10.write(90);
    delay(500);
    
    myServo5.write(90);
    myServo7.write(90);
    myServo9.write(90);
    myServo11.write(90);
    delay(1000);
  }
}

// ========== SEGMENT: Mișcări picioare stânga-dreapta ==========
void legsLeftRight() {
  for (int count = 0; count < 3; count++) {
    myServo4.write(70);
    myServo6.write(70);
    myServo8.write(110);
    myServo10.write(110);
    delay(1000);
    
    myServo4.write(90);
    myServo6.write(90);
    myServo8.write(90);
    myServo10.write(90);
    delay(1000);
    
    myServo4.write(110);
    myServo6.write(110);
    myServo8.write(70);
    myServo10.write(70);
    delay(1000);
    
    myServo4.write(90);
    myServo6.write(90);
    myServo8.write(90);
    myServo10.write(90);
    delay(1000);
  }
}

// ========== SEGMENT: Picioare în interior ==========
void legsInside() {
  for (int count = 0; count < 3; count++) {
    myServo4.write(110);
    myServo6.write(70);
    myServo8.write(110);
    myServo10.write(70);
    delay(1000);
    
    myServo4.write(90);
    myServo6.write(90);
    myServo8.write(90);
    myServo10.write(90);
    delay(1000);
  }
}

// ========== SEGMENT: Culcare și stat ==========
void layStay() {
  for (int count = 0; count < 3; count++) {
    myServo4.write(0);
    myServo6.write(180);
    myServo8.write(0);
    myServo10.write(180);
    delay(1000);
    
    myServo4.write(90);
    myServo6.write(90);
    myServo8.write(90);
    myServo10.write(90);
    delay(1000);
  }
}