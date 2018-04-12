/*
Character Decoder Program:

This program takes in a comma-separated list of integers, and switches between three
decoding modes - Uppercase, Lowercase, and Punctuation to decode the hidden meaning
of the integer list.
*/

//included libraries and namespaces

#include <iostream>

using namespace std;

//Main function body

int main() {
    
    char digitChar1;
    char digitChar2;
    int digit1;
    int digit2;

    cout << "Enter a two-digit number: " << "\n";
    digitChar1 = cin.get();
    digitChar2 = cin.get();

    digit1 = digitChar1 - '0';
    digit2 = digitChar2 - '0';

    int overallNumber = digit1 * 10 + digit2;

    cout << "Your number, as an integer: " << overallNumber << "\n";
    
    return 0;
}