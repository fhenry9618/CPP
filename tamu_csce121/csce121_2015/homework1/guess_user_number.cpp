/*

Number guessing game:

Ask the user to think of a number between 1 and 100, and then try to guess their number
in seven steps or less. Use of the '<' and '<=' operators, as well as if/else statements
is strongly recommended.

*/

//necessary includes

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//prototypes (all in one program for now)

vector<int> upperHalf(vector<int>);
vector<int> lowerHalf(vector<int>);
void printVector(vector<int>);
int newGuess(vector<int>, int);

//main function

int main() {
    
    //variable declaration and definition
    
    bool terminate = false;
    char responseUser;
    int guessCPU = 50;
    vector<int> guessRange(100);

    //filling vector with values 1 - 100
    
    for (int i = 0; i < guessRange.size(); ++i) {
        
        guessRange.at(i) = i + 1;
    
    }

    //prompting user, initially
    
    cout << "Please think of a number between one and one hundred, and" << "\n";
    cout << "this program will correctly guess it in 7 iterations or less." << "\n";

    //cycle through functions and adjust
    
    int iter = 1;

    do {
        
        //repeated prompt
        
        cout << "\nIs " << guessCPU << " the number you had in mind?" << "\n";
        cout << "Respond with a (Y) if so, (G) if it's greater or (L) if less." << "\n";
        
        cin >> responseUser;
        
        //three-way decision tree
        
        if (responseUser == 'Y' || responseUser == 'y') {//ends the program
            
            cout << "Yes! I knew you couldn't stump me!" << "\n";
            cout << "It only took me " << iter << " step(s)!";
            
            terminate = true;

        } else if (responseUser == 'G' || responseUser == 'g') {//move to upper hald of vector
            
            guessRange = upperHalf(guessRange);

            guessCPU = newGuess(guessRange, guessCPU);

        } else if (responseUser == 'L' || responseUser == 'l') {//move to lower half of vector
            
            guessRange = lowerHalf(guessRange);
            
            guessCPU = newGuess(guessRange, guessCPU);

        } else {//return error message
            
            cout << "ERROR: Enter a valid response." << "\n";

        }

        ++iter;

    } while (terminate == false);

    return 0;
}

void printVector(vector<int> array) {//prints out vector, mainly for debugging purposes
    
    for (int i; i < array.size(); ++i) {
        
        cout << array.at(i) << " ";
        
        if (i % 5 == 0) cout << "\n";
    }
    
    cout << "\n";
}

vector<int> upperHalf(vector<int> array) {//remove lower half of vector elements
    
    int newSize = array.size() / 2;

    reverse(array.begin(), array.end());

    array.resize(newSize);

    reverse(array.begin(), array.end());

    return array;
}

vector<int> lowerHalf(vector<int> array) {//remove upper half of vector elements
    
    int newSize = array.size() / 2;
    
    array.resize(newSize);

    return array;
}

int newGuess(vector<int> array, int midpoint) {//generate new CPU guess using vector midpoint
    
    midpoint = array.at(array.size() / 2);
    
    return midpoint;
}