#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;
    Book b;
    b.title = "Book 1";
    b.author = "Author 1";
    lib.Donate(b);
    lib.PrintBooks();
}
