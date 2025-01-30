#include "Circle.h"
#include "Square.h"

int main()
{
  Shape *shape = new Circle(5);
  Shape *shape2 = new Square(7);

  shape->draw();
  shape2->draw();
}
