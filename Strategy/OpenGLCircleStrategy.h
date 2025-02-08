#ifndef __OPENGL_STRATEGY_H__
#define __OPENGL_STRATEGY_H__

#include <stdio.h>
#include "DrawStrategy.h"

class Circle;

class OpenGLCircleStrategy : public DrawStrategy<Circle>
{
  private:
	int32_t color_;

  public:
	OpenGLCircleStrategy( DRAW_COLOR color) {
	  this->color_ = color;
	}

	void draw( Circle& c) override {
	  Point center = c.getCenter();
	  printf("Circle(%2f, %2f), color:%d, drawing using OpenGL\n",center.x, center.y, this->color_);
	}
};

#endif
