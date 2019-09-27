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

void Library::CheckoutBook(Book b) {
	for (int i = 0 ; i < sizeof(shelf_); i++) {
		if (shelf_[i].title == b.title && shelf_[i].author == b.author) {
			shelf_.erase(shelf_.begin() + i);
		}
	}
}