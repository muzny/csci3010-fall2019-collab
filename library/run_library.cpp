#include <iostream>
#include <vector>
#include "Library.h"

/*
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;

    Book b,c,d;
    b.author="Jake";
    c.author="Jake";
    d.author="Danny";
    b.title="book1";
    c.title="book2";
    d.title="book3";
    lib.Donate(b);
    lib.Donate(c);
    lib.Donate(d);
    int num_of_books;
    num_of_books=lib.Find("Jake");
    std::cout<<"Found "<<num_of_books<<" books" << std::endl;

}
