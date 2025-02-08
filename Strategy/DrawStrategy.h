#ifndef __DRAW_STRATEGY_H__
#define __DRAW_STRATEGY_H__

typedef enum
{
  RED,
  BLUE,
  GREEN,
  PURPLE,
  YELLOW
} DRAW_COLOR;

template< typename T >
class DrawStrategy
{
  public:
	virtual ~DrawStrategy() = default;
	virtual void draw( T &) = 0;
};

#endif
