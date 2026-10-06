#include<iostream>
#include<vector>

class Library{
    private:
    
    vector<Book> books ;
    public:
    void addBook(Book book){
        books.push_back(book);
    }

    std::unique_ptr<Iterator> createIterator() {
    return std::make_unique<BookIterator>(books);
}

};