#include<bits/stdc++.h>
#include 'Library.cpp'
using namespace std;
int main() {

    Library library;

    library.addBook(Book("Clean Code"));
    library.addBook(Book("Design Patterns"));
    library.addBook(Book("Effective C++"));
    library.addBook(Book("System Design"));

    auto iterator = library.createIterator();

    while (iterator->hasNext()) {

        Book book = iterator->next();

        cout << book.getTitle() << endl;
    }

    return 0;
}