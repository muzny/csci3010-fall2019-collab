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

    //Acquire amount of copies of Book b.
    void Acquire(Book b, int copies);

    void PrintBooks();

private:
    // arrays require size to be known at compile time.
    // if we were only going to store a fixed number of books
    // we could do this easily:
    // Book shelf_[10];
    std::vector<Book> shelf_;
};



#endif // _LIBRARY_H_
