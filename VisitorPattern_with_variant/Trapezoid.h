#ifndef __TRAPEZOID_H__
#define __TRAPEZOID_H__

#include <iostream>
#include "Point.h"

class Trapezoid
{
  private:
	double topSide_;
	double bottomSide_;
	double bothSide_;
	Point center_{};

  public:
	explicit Trapezoid( double topSide = 1, double bottomSide = 2, double bothSide = 3) {
	  if ( topSide <= 0 ) {
		std::cout << "top side is invalid !!" << std::endl;
	  } else if ( bottomSide <= 0 ) {
		std::cout << "bottom side is invalid !!" << std::endl;
	  } else if ( topSide > bottomSide ) {
		std::cout << "arg condition is not trapezoid !!"<< std::endl;
	  } else {
		std::cout << " trapezoid arg condition is valid" << std::endl;
		this->topSide_ = topSide;
		this->bottomSide_ = bottomSide;
		this->bothSide_ = bothSide;
	  }
	}

	void draw() const {
	  std::cout << " trapezoid drawing~!" << std::endl;
	}

	Point getCenter() { return center_; }

	void setCenter( double x, double y) {
	  center_.x = x;
	  center_.y = y;
	}

	double getTopSide() { return topSide_; }
	double getBottomSide() { return bottomSide_; }
	double getBothSide() { return bothSide_; }
};

#endif
