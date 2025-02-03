#ifndef __ROTATE_H__
#define __ROTATE_H__

#include "ShapeVisitor.h"

using namespace std;

class Rotate : public ShapeVisitor
{
  public:
	explicit Rotate() {}

  void visit( Circle& c) override {
	ignore = c;
	cout << "Circle is Rotate !! " << endl;
  }

  void visit( Square& s) override {
	ignore = s;
	cout << "Square is Rotate !! " << endl;
  }

  void visit( Trapezoid& t) override {
	ignore = t;
	cout << "Trapezoid is Rotate !! " << endl;
  }
};

#endif
