#include "Circle.h"
#include "Square.h"
#include "Trapezoid.h"

int main()
{
  try {
	Shape *circleShape = new Circle(5);
	Shape *squareShape = new Square(7);
	Shape *trapeZoidShape = new Trapezoid();

	circleShape->draw();
	squareShape->draw();
	trapeZoidShape->draw();

  }
  catch (invalid_argument& e) {
	cerr << e.what();
  }	

}
