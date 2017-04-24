/*
 * Author: Manuel Parra Z.
 * Date: 23/04/2017
 * License: MIT License
 * Materials:
 *      - Arduino Uno R3
 *      - DFRobot DF-MD V1.3
 *      - DFRobot Pirate 4WD
 * Description: This library will control the car movements with the materials
 * previously described. Review the Fritzing electronic diagram in the doc
 * section.
 * Link: https://github.com/mparra-mpz/Galileo
 */

#include "Arduino.h"
#include "Pirate4WD.h"

Pirate4WD::Pirate4WD(int _M1, int _E1, int _M2, int _E2)
{
  M1 = _M1;
  E1 = _E1;
  M2 = _M2;
  E2 = _E2;
  power = 0;
  direction = STOP;
  pinMode(M1, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(E2, OUTPUT);
}

void Pirate4WD::foward()
{
  digitalWrite(M1, HIGH);
  digitalWrite(M2, HIGH);
  direction = FOWARD;
}

void Pirate4WD::reverse()
{
  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  direction = REVERSE;
}

void Pirate4WD::left()
{
  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);
  direction = LEFT;
}

void Pirate4WD::right()
{
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);
  direction = RIGHT;
}

void Pirate4WD::stop()
{
  power = 0;
  analogWrite(E1, power);
  analogWrite(E2, power);
  direction = STOP;
}

int Pirate4WD::getPower()
{
  return power;
}

void Pirate4WD::setPower(int _power)
{
  if (_power >= 0 && _power <= 255)
  {
    power = _power;
    analogWrite(E1, power);
    analogWrite(E2, power);
  }
}

Direction Pirate4WD::getDirection()
{
  return direction;
}
