#include "Book.h"
#include <utility>

Book::Book(std::string title) : title(std::move(title)) {}
std::string Book::getBookTitle() const {
    return title;
}

void Book::changeBookTitle(std::string newTitle) {
    title = std::move(newTitle);
}
