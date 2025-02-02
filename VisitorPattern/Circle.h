#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include <string>
#include "Shape.h"
#include "ShapeVisitor.h"

using namespace std;

class Circle : public Shape
{
  private:
	double radius_;
	Point center_{};

  public:
	explicit Circle( double radius ) {
	  if (radius < 0) {
		throw invalid_argument("Circle radius is invalid");
	  } else {
		cout << "Circle radius is valid " << endl;
		this->radius_ = radius;
	  }
	}

	void draw() const override {
	  std::cout << " circle drawing~!" << endl;
	}

	Point getCenter() override { return center_; }

	void setCenter( double x, double y) {
	  center_.x = x;
	  center_.y = y;
	}

	double getRadius() { return radius_; }

  public: // visitor pattern method
    void accept(ShapeVisitor&& v) override {
	  v.visit(*this);
	}
};

#endif
