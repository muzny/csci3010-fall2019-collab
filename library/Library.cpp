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

void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}

/*
Function: FindBook
Params: A string that should match a title.
A simple function that finds a book and returns it. If nothing is found an exception 
is thrown.
Returns: A book if it is found.
*/

Book Library::FindBook(std::string t) {
    for (size_t i = 0; i < shelf_.size(); i++){
        if(shelf_[i].title == t){
            return shelf_[i];
        }
    }
  	throw std::invalid_argument( "No book found!" );
}
