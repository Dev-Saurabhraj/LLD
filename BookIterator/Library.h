#pragma once

#include "Book.h"
#include "Iterator.h"

#include <memory>
#include <vector>

class Library {
public:
    void addBook(Book book);
    std::unique_ptr<Iterator> createIterator();

private:
    std::vector<Book> books;
};
