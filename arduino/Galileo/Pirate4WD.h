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

#ifndef Pirate4WD_h
#define Pirate4WD_h

#include "Direction.h"

class Pirate4WD
{
  public:
    Pirate4WD(int _M1, int _E1, int _M2, int _E2);
    void foward();
    void reverse();
    void left();
    void right();
    void stop();
    int getPower();
    void setPower(int _power);
    Direction getDirection();

  private:
    int M1;
    int E1;
    int M2;
    int E2;
    int power;
    Direction direction;
};

#endif
