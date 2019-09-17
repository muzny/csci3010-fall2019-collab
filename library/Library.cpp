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

/**
	Find takes in an author string and prints all of the matching books with that author
	by Jake Henson and Daniel Camarena
*/
int Library::Find(std::string auth){
	std::cout<<"Found: " << std::endl;
	int found_books = 0;
	for (Book b : shelf_) { //for every book in the shelf..
			if(auth == b.author){
				std::cout << b.title << " by " << b.author << std::endl;
				found_books++;
			}
	}

	return found_books;
}
