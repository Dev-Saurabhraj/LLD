#include<iostream>
#include "Iterator.h"
#include<vector>
class BookIterator : public Iterator {
    private:
    vector<Book>& books;
    int index;

    public:

    BookIterator(vector<Book>& books) : books(books), index(0){};

    bool hasNext() override {
        return index < books.size();
    };
    Book next() override {
        return books[index++];
    }
};