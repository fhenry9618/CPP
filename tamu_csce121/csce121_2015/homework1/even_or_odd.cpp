/*
This program determines whether or not a user-entered number is even or odd.
*/

#include <iostream>

using namespace std;

int main() {

    //declarations
    
    int userNum;

    //prompting user for number

    cout << "Please enter a number: " << "\n";
    cin >> userNum;

    //determine even or odd status

    if (userNum % 2 == 0) {

        cout << "The value " << userNum << " is an even number." << "\n";

    } else {

        cout << "The value " << userNum << " is an odd number." << "\n";
    }

    return 0;

}