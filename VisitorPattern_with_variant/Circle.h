#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include "Point.h"

class Circle
{
  private:
	double radius_;
	Point center_{};

  public:
	explicit Circle( double radius ) {
	  if (radius < 0) {
		std::cout << "Circle radius is invalid " << std::endl;
	  } else {
		std::cout << "Circle radius is valid " << std::endl;
		this->radius_ = radius;
	  }
	}

	void draw() const {
	  std::cout << " circle drawing~!" << std::endl;
	}

	Point getCenter() { return center_; }

	void setCenter( double x, double y) {
	  center_.x = x;
	  center_.y = y;
	}

	double getRadius() { return radius_; }
};

#endif
