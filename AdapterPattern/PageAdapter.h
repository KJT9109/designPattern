#ifndef __PAGE_ADAPTER_H_
#define __PAGE_ADAPTER_H_

#include "Document.h"
#include "Pages.h"

class PageAdapter : public Document
{
  public:
	explicit PageAdapter(std::unique_ptr<Pages> pages) {
	  this->concretePages = std::move(pages);
	}
	//...
	int exportToJSON() const override {
	  concretePages->convertToJson();
	  return 0;
	}

	int serialize() const override {
	  concretePages->convertToBytes();
	  return 0;
	}

  private:
	std::unique_ptr<Pages> concretePages;
};

#endif
