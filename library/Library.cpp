#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <iterator>
#include "Library.h"


bool Book::operator==(const Book & b) {
    return title == b.title && author == b.author;
}

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

bool Library::operator==(const Library & lib) {
	set <std::string> book_ids;
	set <std::string> book_ids_2;
	
    for (Book b : shelf_) {
    	books_ids.insert(b.author+b.title);
    }
    for (Book b : lib.shelf_) {
    	books_ids_2.insert(b.author+b.title);
    }
    return (book_ids==book_ids_2);
    // vector<std::string> v(n);
    // vector<std::string>::iterator it,st;
   	// it = std::set_intersection(book_ids, book_ids +n, book_ids_2, book_ids_2+n, v.begin());

    // for(st = v.begin(); st != it; ++st){

    // }
}