#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

Authors:
Will Culkin
Bryce DesBrisay

implemented keyword find to search book titles

lecture 7
*/


int main() {

    // start off with one library instantiated
    Library lib;
    lib.PrintBooks(); // test to see if library contains some books after construction 
    

    Book b1;
    b1.title = "Cat in the Hat";
    b1.author = "Dr. Suess";

    lib.Donate(b1);

    bool found = lib.Find("Cat");
    std::cout << "Keywordgit  Found: " << found << std::endl;

}
