#ifndef __PAGES_H_
#define __PAGES_H_

#include <stdio.h>

class Pages
{
  public:
	virtual void convertToBytes() const = 0;
	virtual void convertToJson() const = 0;
	virtual ~Pages() = default;

};



#endif
