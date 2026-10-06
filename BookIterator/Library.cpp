#include "Library.h"

#include "BookIterator.h"

#include <utility>

void Library::addBook(Book book) {
    books.push_back(std::move(book));
}

std::unique_ptr<Iterator> Library::createIterator() {
    return std::make_unique<BookIterator>(books);
}
