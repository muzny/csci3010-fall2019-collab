#include <iostream>
#include <vector>
#include "Library.h"
/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;

    Book a;
    Book b;
    a.title = "Uglies";
    a.author = "Scott Westerfeld";
    b.title = "Pretties";
    b.author = "Scott Westerfeld";
    
    lib.Donate(a);
    lib.Donate(b);
    
    lib.PrintBooks();
    lib.PrintShelfSize();

    lib.PrintBooks(); // test to see if library contains some books after construction 
    
}
