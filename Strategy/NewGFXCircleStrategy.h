#ifndef __NEWGFX_STRATEGY_H__
#define __NEWGFX_STRATEGY_H__

#include <stdio.h>
#include "DrawStrategy.h"

class Circle;

class NewGFXCircleStrategy : public DrawStrategy<Circle>
{
  private:
	DRAW_COLOR color_;

  public:
	NewGFXCircleStrategy( DRAW_COLOR color) {
	  this->color_ = color;
	}

	void draw( Circle& c) override {
	  Point center = c.getCenter();
	  printf("Circle(%2f, %2f), color:%d, drawing using NewGFX\n",center.x, center.y, this->color_);
	}
};

#endif
	
