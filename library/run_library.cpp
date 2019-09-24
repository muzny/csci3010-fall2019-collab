#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
    Library lib;


    // Find Book tests
    Book b1;
    b1.author = "John Stamos";
    b1.title = "A Striped Sweater";

    Book b2;
    b1.author = "Soctor Doos";
    b2.title = "One Fish One Fish One Fish Another Fish";

    lib.Donate(b1);
    lib.Donate(b2);

    Book result = lib.FindBook("A Striped Sweater");

    std::cout << "Book Found: " << result.title << " by " << result.author << std::endl;

}
