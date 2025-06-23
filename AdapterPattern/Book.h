#ifndef __BOOK_H_
#define __BOOK_H_

#include "Pages.h"

class Book : public Pages
{
  public:
	explicit Book(int32_t maxPages) {
	  printf(" max pages is %d \n", maxPages);
	  this->maxPages_ = maxPages;
	}

	~Book() {}

	void convertToBytes() const override {
	  printf(" book convert to byte stream \n");
	}

	void convertToJson() const override {
	  printf(" book convert to json stream \n");
	}

  private:
	int32_t maxPages_;
};

#endif
