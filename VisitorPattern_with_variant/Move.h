#ifndef __MOVE_H__
#define __MOVE_H__

#include <iostream>

class Circle;
class Square;
class Trapezoid;

class Move
{
  private:
	double movingX_;
	double movingY_;
  public:
	explicit Move( double x, double y )
	  : movingX_(x), movingY_(y) {}

  void operator()( Circle& c) {
	c.setCenter(movingX_, movingY_);
	std::cout << " Circle move x " << movingX_ << " move y " << movingY_ << std::endl;
  }

  void operator()( Square& s) {
	s.setCenter(movingX_, movingY_);
	std::cout << " Square move x " << movingX_ << " move y " << movingY_ << std::endl;
  }

  void operator()( Trapezoid& t) {
	t.setCenter(movingX_, movingY_);
	std::cout << " Trapezoid move x " << movingX_ << " move y " << movingY_ << std::endl;
  }
};

#endif
