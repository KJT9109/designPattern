#include <vector>
#include <memory>

#include "Circle.h"
#include "OpenGLCircleStrategy.h"
#include "NewGFXCircleStrategy.h"

int main()
{
  try {
	std::vector<std::unique_ptr<Shape>> Shapes;
	Shapes.push_back(std::make_unique<Circle>(3, std::make_unique<OpenGLCircleStrategy>(YELLOW)));
	Shapes.push_back(std::make_unique<Circle>(4, std::make_unique<OpenGLCircleStrategy>(GREEN)));
	Shapes.push_back(std::make_unique<Circle>(5, std::make_unique<OpenGLCircleStrategy>(RED)));


	Shapes.push_back(std::make_unique<Circle>(6, std::make_unique<NewGFXCircleStrategy>(YELLOW)));
	Shapes.push_back(std::make_unique<Circle>(7, std::make_unique<NewGFXCircleStrategy>(GREEN)));
	Shapes.push_back(std::make_unique<Circle>(8, std::make_unique<NewGFXCircleStrategy>(RED)));

	for (auto const& shape : Shapes)
	{
	  shape->draw();
	}
  }
  catch (invalid_argument& e) {
	cerr << e.what();
  }	
}
