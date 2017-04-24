/*
 * Author: Manuel Parra Z.
 * Date: 23/04/2017
 * License: MIT License
 * Materials:
 *      - Arduino Uno R3
 *      - DFRobot DF-MD V1.3
 *      - DFRobot Pirate 4WD
 * Description: This sketch will be use to test the power changes, the analog
 * value will be increase from 0 to 255 (from 0 to 7,5 Volts), this test will
 * tell us how much power we need to move the car.
 * Link: https://github.com/mparra-mpz/Galileo
 */
 
#include <Pirate4WD.h>

Pirate4WD car = Pirate4WD(4,5,7,6);

void setup()
{
  Serial.begin(9600);
  Serial.println("Setup finished.");
}

void loop()
{
  car.foward();
  for (int i = 0; i <= 255; i += 10)
  {
    car.setPower(i);
    Serial.print("Power is: ");
    Serial.println(car.getPower());
    delay(1000);
  }
}
