#include <iostream>
#include <vector>
#include "Library.h"

/* 
David Skrenta
Lecture 7 Activity
This program tests the implementation of Library.  
*/

// implement new constructor - takes string name
// override operator << for library

int main() {    
    Library lib("Some lib");

    Book book1;
    book1.title = "Some Book";
    book1.author = "Some Author";

    lib.Donate(book1);

    lib.PrintBooks();

    std::cout << lib;
}
