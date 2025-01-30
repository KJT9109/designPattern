#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
  private:
	double radius_;
	Point center_{};

  public:
	explicit Circle( double radius )
	  : radius_( radius )
	{
	  if (radius > 0) {
		cout << "Circle radius is valid !! \n" << endl;
	  } else {
		cout << "Circle radius is invalid !! \n"<< endl;
	  }
	}

	void draw() const override {
	  std::cout << " circle drawing~! \n" << endl;
	}

	double radius() { return radius_; }
	Point center() { return center_; }
};

#endif
