#include <iostream>
#include "CarClass.h"

using namespace std;

// Car::Car(int year, string make)
// {
//   yearModel = year;
//   make = makee;
//   speed = 0;
// }
void Car::brake()
{
    speed = speed - 5;
}

void Car::accelerate()
{
    speed = speed + 5;
}


void Car::setSpeed(int sp)
{
    speed = sp;
}

int Car::getSpeed()
{
    return speed;
}
