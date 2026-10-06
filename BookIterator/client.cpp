#include "Library.h"

#include <iostream>

int main() {
    Library library;

    library.addBook(Book("Clean Code"));
    library.addBook(Book("Design Patterns"));
    library.addBook(Book("Effective C++"));
    library.addBook(Book("System Design"));

    auto iterator = library.createIterator();
    while (iterator->hasNext()) {
        std::cout << iterator->next().getBookTitle() << '\n';
    }

    return 0;
}
