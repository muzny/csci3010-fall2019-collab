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
    Book c;
    a.title = "Heart of Darkness";
    a.author = "Joseph Conrad";
    b.title = "The Catcher and the Rye";
    b.author = "J.D. Salinger";
    c.title = "The Great Gatsby";
    c.author = "F. Scott Fitzgerald";
    lib.Donate(a);
    lib.Donate(b);
    lib.Donate(c);
    lib.TakeInventory();
}
