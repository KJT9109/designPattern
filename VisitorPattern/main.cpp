#include <vector>
#include <memory>

#include "Circle.h"
#include "Trapezoid.h"
#include "Square.h"
#include "Move.h"
#include "Rotate.h"

int main()
{
  Move move5m(1,5);
  try {
	std::vector<std::unique_ptr<Shape>> Shapes;
	Shapes.push_back(std::make_unique<Circle>(5));
	Shapes.push_back(std::make_unique<Square>(7));
	Shapes.push_back(std::make_unique<Trapezoid>());

	for (auto const& shape : Shapes)
	{
	  shape->draw();
	  // move operation in visitor pattern
	  shape->accept(std::move(move5m));
	 // shape->accept( Move{1,5} );
	  Point getPoint = shape->getCenter();
	  cout << " x,y is " << getPoint.x << "," << getPoint.y << endl; 

	  // rotate operation in visitor pattern
	  shape->accept(Rotate{});
	}
  }
  catch (invalid_argument& e) {
	cerr << e.what();
  }	
}
