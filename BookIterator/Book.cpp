#include<iostream>
#include<string>
using namespace std;

class Book {
    public :
        string title; 
        Book(string title){
            this->title = title;
        }
        string getBookTitle(){
            return title;
        }

        void changeBookTitle(){
            this->title = title;
        }

};
