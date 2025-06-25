
#ifndef __GASOLINE_ENGINE_H__
#define __GASOLINE_ENGINE_H__
#include <stdio.h>

#include "Engine.h"

class GasolineEngine : public Engine
{
  public:
	explicit GasolineEngine() {}

	int32_t start() const override {
	 printf(" gasoline start \n");
	 return 0;
	}

	int32_t stop() const override {
	 printf(" gasoline stop \n");
	 return 0;
	}
};

#endif
