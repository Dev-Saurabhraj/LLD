#pragma once

#include "Book.h"

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual Book next() = 0;

    virtual ~Iterator() = default;
};