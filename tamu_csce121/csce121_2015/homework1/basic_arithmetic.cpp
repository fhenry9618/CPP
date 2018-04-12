/*
This program prompts the user for two integer values, stores them, and 
performs basic arithmetic on them. This includes determining the larger
value, their sum, difference, product, and ratio. The results are then 
output to the console
*/

#include <iostream>

using namespace std;

int main() {
    
    //declarations

    int val1 = 0;
    int val2 = 0;
    int larger = 0;
    int smaller = 0;

    //prompt the user for the values

    cout << "Please enter the first integer value: " << "\n";
    cin >> val1;

    cout << "Please enter the second integer value: " << "\n";
    cin >> val2;

    //calculate the larger number and output to console

    if (val1 > val2) {
        
        cout << val1 << " is larger than " << val2 << "\n";
        
        larger = val1;
        smaller = val2;

    } else if (val2 > val1) {
        
        cout << val2 << " is larger than " << val1 << "\n";

        larger = val2;
        smaller = val1;

    } else {
        
        cout << val1 << " and " << val2 << " are the same." << "\n";
        
        larger = val1;
        smaller = val2;

    }

    //calculate the sum/difference/product/ratio of the values

    cout << "Sum: " << val1 + val2 << "\n";

    cout << "Difference: " << larger - smaller << "\n";

    cout << "Product: " << val1 * val2 << "\n";

    cout << "Ratio: " << smaller << " : " << larger << "\n";

    return 0;
}