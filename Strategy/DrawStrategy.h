#ifndef __DRAW_STRATEGY_H__
#define __DRAW_STRATEGY_H__

template< typename T >
class DrawStrategy
{
  public:
	virtual ~DrawStrategy() = default;
	virtual void draw( T &) = 0;
};

#endif
