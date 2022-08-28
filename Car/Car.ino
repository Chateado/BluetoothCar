#include <AFMotor.h>
#include "SoftwareSerial.h"

char i;

int speed = 150;

int frontlight = 23;
int backlight = 22;

int buzzer = 53;

AF_DCMotor left_engine(4);
AF_DCMotor right_engine(3);

SoftwareSerial bluetooth(14, 15);

void setup() {
  pinMode(frontlight, OUTPUT);
  pinMode(backlight, OUTPUT);

  Serial.begin(9600);
  Serial3.begin(3);
}

void loop() {
  connect();
  
  payload();
  power();
}

void connect() {
  if (Serial3.available()) {
    i = Serial3.read();

    Serial.println(i);
  }
}

void payload() {
  if (i == 'F') {
    
    follow();
    
  } else if (i == 'B') {
    
    back(); 
    
  } else if (i == 'R') {

    right();
    
  } else if (i == 'L') {

    left();
    
  } else if (i == 'I') {

    fRight();
    
  } else if (i == 'G') {

    fLeft();
    
  } else if (i == 'S') {

    stop();
  }
}

void accessories() {
  
}

void power() {
  if (i == '0') {
    speed = 0;
  } else if (i == '2') {
    speed = 50;
  } else if (i == '4') {
    speed = 100;
  } else if (i == '6') {
    speed = 150;
  } else if (i == '8') {
    speed = 200;
  } else if (i == 'q') {
    speed = 255;
  }
}

void follow() {
  left_engine.run(FORWARD);
  left_engine.setSpeed(speed);

  right_engine.run(FORWARD);
  right_engine.setSpeed(speed);
}

void back() {
  left_engine.run(BACKWARD);
  left_engine.setSpeed(speed);

  right_engine.run(BACKWARD);
  right_engine.setSpeed(speed);
}

void right() {
  left_engine.run(FORWARD);
  left_engine.setSpeed(speed);

  right_engine.run(BACKWARD);
  right_engine.setSpeed(speed);
}

void left() {
  left_engine.run(BACKWARD);
  left_engine.setSpeed(speed);

  right_engine.run(FORWARD);
  right_engine.setSpeed(speed);
}

void fRight() {
  left_engine.run(FORWARD);
  left_engine.setSpeed(speed);

  right_engine.run(FORWARD);
  right_engine.setSpeed(speed / 2);
}

void fLeft() {
  left_engine.run(FORWARD);
  left_engine.setSpeed(speed / 2);

  right_engine.run(FORWARD);
  right_engine.setSpeed(speed);
}

void stop() {
  left_engine.run(RELEASE);
  left_engine.setSpeed(0);

  right_engine.run(RELEASE);
  right_engine.setSpeed(0);
}
