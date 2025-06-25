#include <stdio.h>
#include <memory>
#include "SedanCar.h"

int main()
{
  Car* myCar = new SedanCar;
  myCar->drive();

  return 0;
}
