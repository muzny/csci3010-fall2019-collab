#ifndef _LIBRARY_H_
#define _LIBRARY_H_

struct Book {
    std::string title;
    std::string author;
};


class Library {
public:
    Library(std::string n);

    void Donate(Book b);

    void PrintBooks();

    friend std::ostream & operator<<(std::ostream & os, const Library lib);

private:
    std::vector<Book> shelf_;
    std::string name_;
};



#endif // _LIBRARY_H_
