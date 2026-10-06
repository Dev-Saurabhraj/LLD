#include "BookIterator.h"

BookIterator::BookIterator(std::vector<Book>& books) : books(books) {}

bool BookIterator::hasNext() {
    return index < books.size();
}

Book BookIterator::next() {
    return books[index++];
}
