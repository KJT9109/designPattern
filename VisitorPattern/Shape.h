#ifndef __SHAPE_H__
#define __SHAPE_H__

struct Point
{
  double x;
  double y;
};

class Shape
{
  public:
	Shape() = default;

	virtual ~Shape() = default;
	virtual void draw() const = 0;
};

#endif
