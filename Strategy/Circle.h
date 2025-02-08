#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <iostream>
#include <string>
#include "Shape.h"
#include "DrawStrategy.h"

using namespace std;

class Circle : public Shape
{
  private:
	std::unique_ptr<DrawStrategy<Circle>> drawer_;
	double radius_;
	Point center_{};

  public:
	explicit Circle( double radius, std::unique_ptr<DrawStrategy<Circle>> strategy) {
	  if (radius < 0) {
		throw invalid_argument("Circle radius is invalid");
	  } else {
		cout << "Circle radius is valid " << endl;
		this->radius_ = radius;
		this->drawer_ = std::move(strategy);
	  }
	}

	void draw() override {
	  drawer_->draw(*this);
	}

	Point getCenter() override { return center_; }

	void setCenter( double x, double y) {
	  center_.x = x;
	  center_.y = y;
	}

	double getRadius() { return radius_; }


};

#endif
