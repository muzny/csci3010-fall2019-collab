#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;

    Book b1;
    b1.title = "Cat in the Hat";
    b1.author = "Dr. Suess";

    lib.Donate(b1);

    bool found = lib.Find("Cat");
    std::cout << "Keyword Found: " << found << std::endl;

}
