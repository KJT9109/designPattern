#ifndef __MOVE_H__
#define __MOVE_H__

#include "ShapeVisitor.h"

using namespace std;

class Move : public ShapeVisitor
{
  private:
	double movingX_;
	double movingY_;
  public:
	explicit Move( double x, double y )
	  : movingX_(x), movingY_(y) {}

  void visit( Circle& c) override {
	c.setCenter(movingX_, movingY_);
	cout << " Circle move x " << movingX_ << " move y " << movingY_ << endl;
  }

  void visit( Square& s) override {
	s.setCenter(movingX_, movingY_);
	cout << " Square move x " << movingX_ << " move y " << movingY_ << endl;
  }

  void visit( Trapezoid& t) override {
	t.setCenter(movingX_, movingY_);
	cout << " Trapezoid move x " << movingX_ << " move y " << movingY_ << endl;
  }
};

#endif
