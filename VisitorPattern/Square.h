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
	explicit Square( double side )
	  : side_( side )
	{
	  if (side > 0) {
		cout << "Square side is valid !! \n" << endl;
	  } else {
		cout << "Square side is invalid !! \n" << endl;
	  }
	}

	void draw() const override {
	  std::cout << " square drawing~! \n" << std::endl;
	}

	double side() { return side_; }
	Point center() { return center_; }
};


#endif
