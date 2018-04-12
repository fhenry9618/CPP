#ifndef BOOKS_H
#define BOOKS_H
#include <string>
#include <iostream>

class Books {
public:
    Books (std::string title, std::string author, std::string genre, int isbn);
    std::string get_title() const;
    bool operator==(const Books& b);

private:
    std::string title;
    std::string author;
    std::string genre;
    int isbn;
};

#endif