#ifndef __SQUARE_H__
#define __SQUARE_H__

#include <iostream>
#include "Point.h"

class Square
{
  private:
	double side_;
	Point center_{};

  public:
	explicit Square( double side = 1 ) {
	  if (side <= 0) {
		std::cout << "Square side is invalid " << std::endl;
	  } else {
		std::cout << "Square side is valid " << std::endl;
		this->side_ = side;
	  }
	}

	void draw() const {
	  std::cout << " square drawing~!" << std::endl;
	}
	void setCenter( double x, double y) {
	  center_.x = x;
	  center_.y = y;
	}

	Point getCenter() { return center_; }

	double side() { return side_; }
};

#endif
