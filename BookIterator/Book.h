#pragma once

#include <string>

class Book {
public:
    explicit Book(std::string title);

    std::string getBookTitle() const;
    void changeBookTitle(std::string title);

    std::string title;
};
