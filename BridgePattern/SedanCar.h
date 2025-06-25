#ifndef __SEDAN_CAR_H__
#define __SEDAN_CAR_H__
#include <stdio.h>

#include "Car.h"
#include "GasolineEngine.h"

class SedanCar : public Car
{
  public:
	explicit SedanCar() : Car(std::make_unique<GasolineEngine>())
	{}

	void drive() {
	  printf(" running sedan car  \n");
	  getEngine()->start();
	  getEngine()->stop();
	  printf(" stop sedan car \n");
	}
};

#endif

