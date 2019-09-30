#include <iostream>
#include <string>
#include <vector>

#include "Library.h"


/**
	Zero argument constructor initializes a library with a shelf but no books.
*/
Library::Library() { // created by cory-aaron group
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
