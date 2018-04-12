/*
Luhn Checksum Program in one src file
enter a number of any length, and it will tell you whether or not that is valid
according to the Luhn problem rules.
*/
#include <iostream>
#include <string>

using namespace std;

int doubleDigitValue (int );

int main () {
    char digit;
        int checksumOdd = 0;
        int checksumEven = 0;
        int i = 1;
        
        cout << "Enter a number: ";
        digit = cin.get();
        
        while (digit != 10) {
            if (i % 2 == 0) {
                checksumOdd += doubleDigitValue(digit - '0');
                checksumEven += digit - '0';
            } else {
                checksumOdd += digit - '0';
                checksumEven += doubleDigitValue(digit - '0');
            }
            digit = cin.get();
            ++i;
        }
        
        int checksum;
        if ((i - 1) % 2 == 0) checksum = checksumEven;
        else checksum = checksumOdd;
        cout << "Checksum is " << checksum << ". \n";
        if (checksum % 10 == 0) {
            cout << "Checksum is divisible by 10. Valid. \n";
        } else {
            cout << "Checksum is not divisible by 10. Invalid. \n";
        }
        
    return 0;
}

int doubleDigitValue (int digit) {
    int doubleDigit = digit * 2;
    int sum;
    if (doubleDigit > 10) sum = 1 + doubleDigit % 10;
    else sum = doubleDigit;
    return sum;    
}