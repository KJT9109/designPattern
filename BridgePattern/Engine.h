#ifndef __ENGINE_H__
#define __ENGINE_H__

class Engine
{
  public:
	virtual ~Engine() = default;
	virtual int32_t start() const = 0;
	virtual int32_t stop() const = 0;
};

#endif
