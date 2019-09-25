#include <iostream>
#include <string>
#include <vector>

#include "Library.h"


/**
	Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library() {
	std::vector<Book> tmp;
	shelf_ = tmp;  // initialize my shelf
}

void Library::Donate(Book b) {
	shelf_.push_back(b);
}

/*
Adds amount of copies of book b to the library.

@param b; The Book to be added to the library.
@param copies; The amount of copies of said book.
*/
void Library::Acquire(Book b, int copies){
	for(int i = 0; i < copies; i++){
		shelf_.push_back(b);
	}
}

void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}
