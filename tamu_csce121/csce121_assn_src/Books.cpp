#include "Books.h"
using namespace std;

 Books::Books (std::string title, std::string author, std::string genre, int isbn) : title{title}, author{author}, genre{genre}, isbn{isbn} {
    cout << "Calling Books::Books" << endl;
    // if (title.length() < 3) throw Something{};
 }

 string Books::get_title() const {
    return title;
 }

 bool Books::operator==(const Books& b) {
    return (title == b.get_title());
 }