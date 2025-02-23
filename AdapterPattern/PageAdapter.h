#ifndef __PAGE_ADAPTER_H_
#define __PAGE_ADAPTER_H_

#include "Document.h"
#include "Pages.h"

class PageAdapter : public Document
{
  public:
	explicit PageAdapter(std::unique_ptr<Pages> pages) {
	  this->openPages_ = std::move(pages);
	}
	//...
	int exportToJSON() const override {
	  openPages_->convertToJson();
	  return 0;
	}

	int serialize() const override {
	  openPages_->convertToBytes();
	  return 0;
	}

  private:
	std::unique_ptr<Pages> openPages_;
};

#endif
