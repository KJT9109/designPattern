#include <vector>
#include <memory>
#include "PageAdapter.h"
#include "Pages.h"

int main()
{
  std::unique_ptr<Pages> page1;
  PageAdapter transDocument(std::move(page1));

  transDocument.exportToJSON();
  transDocument.serialize();
}
