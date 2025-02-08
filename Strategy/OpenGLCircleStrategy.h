#ifndef __OPENGL_STRATEGY_H__
#define __OPENGL_STRATEGY_H__

#include "DrawStrategy.h"

class Circle;

class OpenGLCircleStrategy : public DrawStrategy<Circle>
{
  private:
	int32_t color_;

  public:
	OpenGLCircleStrategy(int32_t color = 0) {
	  this->color_ = color;
	}

	void draw( Circle& c) override {
	  cout << " Circle("<< this->color_ <<")drawing using OpenGL" << endl;
	}
};

#endif
