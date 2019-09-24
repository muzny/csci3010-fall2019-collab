#include <iostream>
#include <string>
#include <vector>

#include "Library.h"

std::ostream & operator<<(std::ostream & os, const Library lib) {
    for (Book b: lib.shelf_) {
		os << b.title << " by " << b.author << std::endl;
	}
	return os;
}

/**
	Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library(std::string n) {
	std::vector<Book> tmp;
	shelf_ = tmp;  // initialize my shelf
    name = n;
}

void Library::Donate(Book b) {
	shelf_.push_back(b);
}

void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}
