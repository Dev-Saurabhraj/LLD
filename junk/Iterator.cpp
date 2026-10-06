#include<iostream>
#include<Book.cpp>
class Iterator{
 virtual bool hasNext() =0;
 virtual Book next() = 0;

 virtual ~Iterator() = default;
};