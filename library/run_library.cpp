#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;
    lib.PrintBooks(); // test to see if library contains some books after construction 
    

    Book b1;
    b1.title = "Harry Potter";
    b1.author = "Musaab, of course!";

    Book b2;
    b2.title = "Angels and Demons";
    b2.author = "Oceane, of course!";

    lib.ReturnBooks(b1);
    lib.PrintBooks();
    lib.ReturnBooks(b2);
    lib.PrintBooks();

}
