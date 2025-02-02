#ifndef __SQUARE_H__
#define __SQUARE_H__

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Square : public Shape
{
  private:
	double side_;
	Point center_{};

  public:
	explicit Square( double side = 1 ) {
	  if (side <= 0) {
		throw invalid_argument("Square side is invalid");
	  } else {
		cout << "Square side is valid " << endl;
		this->side_ = side;
	  }
	}

	void draw() const override {
	  cout << " square drawing~!" << endl;
	}
	void setCenter( double x, double y) {
	  center_.x = x;
	  center_.y = y;
	}

	Point getCenter() override { return center_; }

	double side() { return side_; }

  public: // visitor pattern method
	void accept( ShapeVisitor&& v) override {
	  v.visit(*this);
	}
};

#endif
