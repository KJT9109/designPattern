#include <vector>
#include <memory>

#include "Circle.h"
#include "OpenGLCircleStrategy.h"

int main()
{
  try {
	std::vector<std::unique_ptr<Shape>> Shapes;
	Shapes.push_back(std::make_unique<Circle>(5, std::make_unique<OpenGLCircleStrategy>(1)));
	Shapes.push_back(std::make_unique<Circle>(5, std::make_unique<OpenGLCircleStrategy>(2)));
	Shapes.push_back(std::make_unique<Circle>(5, std::make_unique<OpenGLCircleStrategy>(3)));

	for (auto const& shape : Shapes)
	{
	  shape->draw();
	}
  }
  catch (invalid_argument& e) {
	cerr << e.what();
  }	
}
