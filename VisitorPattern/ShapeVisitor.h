#ifndef __SHAPE_VISITOR_H__
#define __SHAPE_VISITOR_H__

class Circle;
class Square;
class Trapezoid;

class ShapeVisitor
{
  public:
	ShapeVisitor() = default;

	virtual ~ShapeVisitor() = default;
	virtual void visit( Circle & ) = 0;
	virtual void visit( Square & ) = 0;
	virtual void visit( Trapezoid & ) = 0;
};

#endif
