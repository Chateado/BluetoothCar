#include <AFMotor.h>
#include "SoftwareSerial.h"

char i;

int v = 150;

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

void connect() {
  if (Serial3.available()) {
    i = Serial3.read();

    Serial.println(i);
  }
}
