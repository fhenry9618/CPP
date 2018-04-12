#include <iostream>
#include "Books.h"
using namespace std;

int main (int argc, char * argv[]) {

    Books b1 {"Farewell to Arms", "E. Hemingway", "Fiction", 0};
    cout << b1.get_title() << endl;
    Books b2 {"To Have and Have Not", "E. Hemingway", "Fiction", 0};
    cout << (b1 == b2) << endl;
    return 0;
}