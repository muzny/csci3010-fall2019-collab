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

void Library::browseByAuthor(std::string author){
	if (shelf_.size() < 5){
		PrintBooks();
		return;
	}
	
	int loc = -1;
	for(int i=0; i<shelf_.size(); i++){
		if (shelf_[i].author == author){
			loc = i;
			break;
		}
	}
	if(loc == -1){
		std::cout << "No Books by that Author Found!" << std::endl;
		return;
	}

	switch (loc){
		case 0: //If the book location is in zero, show two to the right and book.
			std::cout << shelf_[loc].title << "by" << shelf_[loc].author << std::endl;
			std::cout << shelf_[loc+1].title << "by" << shelf_[loc+1].author << std::endl;
			std::cout << shelf_[loc+2].title << "by" << shelf_[loc+2].author << std::endl;
			break;
		case 1: //If the book location is in the 1, show the one to the left and two to the right.
			std::cout << shelf_[loc-1].title << "by" << shelf_[loc-1].author << std::endl;
			std::cout << shelf_[loc].title << "by" << shelf_[loc].author << std::endl;
			std::cout << shelf_[loc+1].title << "by" << shelf_[loc+1].author << std::endl;
			std::cout << shelf_[loc+2].title << "by" << shelf_[loc+2].author << std::endl;
			break;
		case shelf_.size()-1: //If the book is at the very end of the vector
			std::cout << shelf_[loc-2].title << "by" << shelf_[loc+2].author << std::endl;
			std::cout << shelf_[loc-1].title << "by" << shelf_[loc+1].author << std::endl;
			std::cout << shelf_[loc].title << "by" << shelf_[loc].author << std::endl;
			break;
		case shelf_.size()-2: //If the book is at the second to end of th vector
			std::cout << shelf_[loc-2].title << "by" << shelf_[loc+2].author << std::endl;
			std::cout << shelf_[loc-1].title << "by" << shelf_[loc+1].author << std::endl;
			std::cout << shelf_[loc].title << "by" << shelf_[loc].author << std::endl;
			std::cout << shelf_[loc+1].title << "by" << shelf_[loc].author << std::endl;
			break;
		default:
			std::cout << shelf_[loc-2].title << "by" << shelf_[loc+2].author << std::endl;
			std::cout << shelf_[loc-1].title << "by" << shelf_[loc+1].author << std::endl;
			std::cout << shelf_[loc].title << "by" << shelf_[loc].author << std::endl;
			std::cout << shelf_[loc+1].title << "by" << shelf_[loc].author << std::endl;
			std::cout << shelf_[loc+2].title << "by" << shelf_[loc].author << std::endl;
			break;
	}
}
