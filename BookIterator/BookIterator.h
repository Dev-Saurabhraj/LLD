#pragma once

#include "Iterator.h"

#include <vector>

class BookIterator : public Iterator {
public:
    explicit BookIterator(std::vector<Book>& books);

    bool hasNext() override;
    Book next() override;

private:
    std::vector<Book>& books;
    std::size_t index = 0;
};
