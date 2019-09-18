#ifndef _LIBRARY_H_
#define _LIBRARY_H_

struct Book {
    std::string title;
    std::string author;
};


class Library {
public:
    Library();

    void Donate(Book b);

    void PrintBooks();

    //Browse by Author
    //We will take in an author name, and print out the 5 books around the first
    //book with that author's name.
    void browseByAuthor(std::string author);

private:
    // arrays require size to be known at compile time.
    // if we were only going to store a fixed number of books
    // we could do this easily:
    // Book shelf_[10];
    std::vector<Book> shelf_;
};



#endif // _LIBRARY_H_
