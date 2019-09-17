#include <iostream>
#include <vector>
#include "Library.h"

/* 
File comment should go here

*/


int main() {

    // start off with one library instantiated
	Book b;
	b.author = "Random";
	b.title = "Title";
    Library lib;
	lib.Donate(b);
	std::cout<<"The current books in the library\n";
	lib.PrintBooks();
	lib.CheckoutBook(b); //Since we already have the book itself we shouldn't have to return it
	std::cout<<"The current books after checkout\n";
	lib.PrintBooks();
}
