#ifndef _LIBRARY_H_
#define _LIBRARY_H_

struct Book {
    std::string title;
    std::string author;

    bool operator==(const Book &b);
};


class Library {
public:
    Library();

    void Donate(Book b);

    void PrintBooks();

    bool operator==(const Library & lib);
private:
    // arrays require size to be known at compile time.
    // if we were only going to store a fixed number of books
    // we could do this easily:
    // Book shelf_[10];
    std::vector<Book> shelf_;
};



#endif // _LIBRARY_H_
