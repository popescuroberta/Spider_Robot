#include <VarSpeedServo.h>

// Declarație servomotoare
VarSpeedServo myServo4;
VarSpeedServo myServo5;
VarSpeedServo myServo6;
VarSpeedServo myServo7;
VarSpeedServo myServo8;
VarSpeedServo myServo9;
VarSpeedServo myServo10;
VarSpeedServo myServo11;

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
  myServo4.slowmove(90, 255);
  myServo5.slowmove(90, 255);
  myServo6.slowmove(90, 255);
  myServo7.slowmove(90, 255);
  myServo8.slowmove(90, 255);
  myServo9.slowmove(90, 255);
  myServo10.slowmove(90, 255);
  myServo11.slowmove(90, 255);
  delay(500);
}

// ========== SEGMENT: Mers înainte ==========
void walkForward() {
  // Configurare poziție de start pentru mers
  myServo5.slowmove(45, 255);
  myServo7.slowmove(135, 255);
  myServo9.slowmove(45, 255);
  myServo11.slowmove(135, 255);
  delay(1000);
  
  myServo10.slowmove(115, 255);
  myServo11.slowmove(85, 255);
  myServo5.slowmove(95, 255);
  delay(200);
  myServo10.slowmove(90, 255);

  // Ciclu de mers
  myServo8.slowmove(50, 255);
  delay(200);
  myServo11.slowmove(135, 255);
  myServo7.slowmove(75, 255);
  myServo9.slowmove(90, 255);
  myServo4.slowmove(60, 255);
  myServo5.slowmove(45, 255);
  myServo8.slowmove(90, 255);
  delay(200);
  myServo4.slowmove(90, 255);
  myServo10.slowmove(130, 255);
  delay(200);
  myServo9.slowmove(45, 255);
  myServo5.slowmove(105, 255);
  myServo11.slowmove(90, 255);
  myServo6.slowmove(120, 255);
  myServo7.slowmove(135, 255);
  myServo10.slowmove(90, 255);
  delay(200);
  myServo6.slowmove(90, 255);
}

// ========== SEGMENT: Viraj la stânga ==========
void turnLeft() {
  for (int count = 0; count < 5; count++) {
    myServo5.slowmove(45, 255);
    delay(500);
    myServo9.slowmove(45, 255);
    delay(500);
    myServo6.slowmove(120, 255);
    myServo7.slowmove(180, 255);
    delay(500);
    myServo6.slowmove(90, 255);
    delay(250);
    myServo10.slowmove(120, 255);
    myServo11.slowmove(180, 255);
    delay(250);
    myServo10.slowmove(90, 255);
    delay(500);
    myServo5.slowmove(5, 50);
    myServo7.slowmove(135, 50);
    myServo9.slowmove(5, 50);
    myServo11.slowmove(135, 50);
    delay(500);
  }
  
  // Revenire la poziția normală
  myServo5.slowmove(90, 50);
  myServo7.slowmove(90, 50);
  myServo9.slowmove(90, 50);
  myServo11.slowmove(90, 50);
}

// ========== SEGMENT: Viraj la dreapta ==========
void turnRight() {
  for (int count = 0; count < 5; count++) {
    myServo7.slowmove(135, 255);
    delay(500);
    myServo11.slowmove(135, 255);
    delay(500);
    myServo4.slowmove(60, 255);
    myServo5.slowmove(0, 255);
    delay(500);
    myServo4.slowmove(90, 255);
    delay(250);
    myServo8.slowmove(60, 255);
    myServo9.slowmove(0, 255);
    delay(250);
    myServo8.slowmove(90, 255);
    delay(500);
    myServo5.slowmove(45, 50);
    myServo7.slowmove(175, 50);
    myServo9.slowmove(45, 50);
    myServo11.slowmove(175, 50);
    delay(500);
  }
  
  // Revenire la poziția normală
  myServo5.slowmove(90, 50);
  myServo7.slowmove(90, 50);
  myServo9.slowmove(90, 50);
  myServo11.slowmove(90, 50);
}

// ========== SEGMENT: Animație câine ==========
void dogAnimation() {
  for (int count = 0; count < 3; count++) {
    myServo5.slowmove(0, 255);
    myServo7.slowmove(180, 255);
    myServo9.slowmove(20, 255);
    myServo11.slowmove(160, 255);
    delay(1000);
    
    myServo4.slowmove(20, 255);
    myServo6.slowmove(160, 255);
    delay(500);
    
    for (int innerCount = 0; innerCount < 3; innerCount++) {
      myServo9.slowmove(40, 255);
      myServo11.slowmove(180, 255);
      delay(500);
      myServo9.slowmove(0, 255);
      myServo11.slowmove(140, 255);
      delay(500);
    }
    
    myServo9.slowmove(20, 255);
    myServo11.slowmove(160, 255);
    myServo4.slowmove(90, 255);
    myServo6.slowmove(90, 255);
    delay(1000);
    
    myServo5.slowmove(90, 255);
    myServo7.slowmove(90, 255);
    myServo9.slowmove(90, 255);
    myServo11.slowmove(90, 255);
    delay(1000);
  }
}

// ========== SEGMENT: Exercițiu fizic ==========
void physicalExercise() {
  for (int count = 0; count < 3; count++) {
    myServo5.slowmove(70, 255);
    myServo7.slowmove(110, 255);
    myServo9.slowmove(10, 255);
    myServo11.slowmove(170, 255);
    delay(500);
    
    myServo8.slowmove(20, 255);
    myServo10.slowmove(160, 255);
    delay(1000);
    
    for (int innerCount = 0; innerCount < 3; innerCount++) {
      myServo4.slowmove(30, 150);
      myServo6.slowmove(150, 150);
      delay(500);
      myServo4.slowmove(90, 150);
      myServo6.slowmove(90, 150);
      delay(500);
    }
    
    myServo8.slowmove(90, 255);
    myServo10.slowmove(90, 255);
    delay(500);
    
    myServo5.slowmove(90, 255);
    myServo7.slowmove(90, 255);
    myServo9.slowmove(90, 255);
    myServo11.slowmove(90, 255);
    delay(1000);
  }
}

// ========== SEGMENT: Mișcări picioare stânga-dreapta ==========
void legsLeftRight() {
  for (int count = 0; count < 3; count++) {
    myServo4.slowmove(70, 255);
    myServo6.slowmove(70, 255);
    myServo8.slowmove(110, 255);
    myServo10.slowmove(110, 255);
    delay(1000);
    
    myServo4.slowmove(90, 255);
    myServo6.slowmove(90, 255);
    myServo8.slowmove(90, 255);
    myServo10.slowmove(90, 255);
    delay(1000);
    
    myServo4.slowmove(110, 255);
    myServo6.slowmove(110, 255);
    myServo8.slowmove(70, 255);
    myServo10.slowmove(70, 255);
    delay(1000);
    
    myServo4.slowmove(90, 255);
    myServo6.slowmove(90, 255);
    myServo8.slowmove(90, 255);
    myServo10.slowmove(90, 255);
    delay(1000);
  }
}

// ========== SEGMENT: Picioare în interior ==========
void legsInside() {
  for (int count = 0; count < 3; count++) {
    myServo4.slowmove(110, 255);
    myServo6.slowmove(70, 255);
    myServo8.slowmove(110, 255);
    myServo10.slowmove(70, 255);
    delay(1000);
    
    myServo4.slowmove(90, 255);
    myServo6.slowmove(90, 255);
    myServo8.slowmove(90, 255);
    myServo10.slowmove(90, 255);
    delay(1000);
  }
}

// ========== SEGMENT: Culcare și stat ==========
void layStay() {
  for (int count = 0; count < 3; count++) {
    myServo4.slowmove(0, 255);
    myServo6.slowmove(180, 255);
    myServo8.slowmove(0, 255);
    myServo10.slowmove(180, 255);
    delay(1000);
    
    myServo4.slowmove(90, 255);
    myServo6.slowmove(90, 255);
    myServo8.slowmove(90, 255);
    myServo10.slowmove(90, 255);
    delay(1000);
  }
}
