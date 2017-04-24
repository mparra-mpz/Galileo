/*
 * Author: Manuel Parra Z.
 * Date: 23/04/2017
 * License: MIT License
 * Materials:
 *      - Arduino Uno R3
 *      - DFRobot DF-MD V1.3
 *      - DFRobot Pirate 4WD
 * Description: This sketch will be use to test the car movements, first the car
 * will go foward on the track, then it will go on reverse, then will turn to
 * left and then will turn to right finally the car will be stop during 3
 * seconds. This sketch will show if you connected the motors and batteries
 * properly. Don't forget to review the fritzing electronic diagram in the
 * document section of the project.
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
  car.setPower(200);
  
  Serial.println("Foward for 3 seconds.");
  car.foward();
  Serial.print("The car direction is: ");
  Serial.println(car.getDirection());
  delay(3000);
  
  Serial.println("Reverse for 3 seconds.");
  car.reverse();
  Serial.print("The car direction is : ");
  Serial.println(car.getDirection());
  delay(3000);
  
  Serial.println("Left for 3 seconds.");
  car.left();
  Serial.print("The car direction is: ");
  Serial.println(car.getDirection());
  delay(3000);
  
  Serial.println("Right for 3 seconds.");
  car.right();
  Serial.print("The car direction is: ");
  Serial.println(car.getDirection());
  delay(3000);
  
  Serial.println("Stop for 3 seconds.");
  car.stop();
  Serial.print("The car direction is: ");
  Serial.println(car.getDirection());
  delay(3000);
}
