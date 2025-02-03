#include <memory>

#include "Circle.h"
#include "Trapezoid.h"
#include "Square.h"
#include "Shapes.h"

#include "Move.h"


int main()
{
  Shapes shapes;

  shapes.emplace_back( Circle{3} );
  shapes.emplace_back( Square{2} );
  shapes.emplace_back( Trapezoid{} );

#if 1
  for (auto& item : shapes) {
	std::visit(Move{1,2}, item);
  }
#endif

  return 0;
}
