#include <vector>
#include <memory>
#include "Book.h"
#include "PageAdapter.h"
#include "Pages.h"

int main()
{
  std::unique_ptr<Book> novelBooks = std::make_unique<Book>(328);
  PageAdapter documentFolder(std::move(novelBooks));

  documentFolder.exportToJSON();
  documentFolder.serialize();
}
