#include <iostream>
#include <string>
#include <vector>

#include "Library.h"


/**
	Zero argument constructor initializes a library with a shelf and three books.
*/
Library::Library() { // created by aaronm
	std::vector<Book> tmp;
	Book a,b,c;
	a.title=("The Shining");
	a.author=("Stephen King");
	b.title=("Quantum Mechanics");
	b.author=("David H. Mcintyre");
	c.title=("Introduction to Elementary Particles");
	c.author=("David Griffiths");
	tmp.push_back(a);
	tmp.push_back(b);
	tmp.push_back(c);
	shelf_ = tmp;  // initialize my shelf;
      
}

void Library::Donate(Book b) {
	shelf_.push_back(b);
}

void Library::PrintBooks() {
	for (Book b : shelf_) {
		std::cout << b.title << " by " << b.author << std::endl;
	}
}

bool Library::Find(std::string name) {
	for (Book b : shelf_) {
		if (b.title.find(name) != std::string::npos) {
			return true;
		}
	}
	return false;
}
