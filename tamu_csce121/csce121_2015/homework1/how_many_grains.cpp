/*
    This problem deals with the "squares on a chessboard" story, but is focused on how man squares
    are needed to get one thousand, one million, and one billion grains of rice. The story says that
    the inventor of the chess game wanted 1 grain of rice for the first square on a chessboard, 2 for 
    the second, and so on. The main constraint of this problem is that it uses only integer types
    to store the results, rather than doubles and exponents.
*/

#include <iostream>

using namespace std;

int main() {

    bool resume = true;
    int grainTracker = 1;
    int grainTotal = 1;
    int squareTracker = 1;

    do {

        //actual loop action: doubling value and
        //adding to the running total

        grainTracker = 2 * grainTracker;
        grainTotal += grainTracker;

        //decision tree for 
        if (grainTotal >= 1000000000) {//print out amount of squares needed and kill the loop
            
            cout << "It takes " << squareTracker << " chessboard squares" << "\n";
            cout << "to get at least one billion grains of rice." << "\n\n";

            resume = false;

        } else if (grainTotal >= 1000000 && grainTotal < 1500000) {
            
            cout << "It takes " << squareTracker << " chessboard squares" << "\n";
            cout << "to get at least one million grains of rice." << "\n\n";

        } else if (grainTotal >= 1000 && grainTotal < 1500) {

            cout << "It takes " << squareTracker << " chessboard squares" << "\n";
            cout << "to get at least one thousand grains of rice." << "\n\n";
        }

        ++squareTracker;

    } while (resume);

    return 0;
}