#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/* Function DECLARATIONS */

/* Globals */
const long NUM_VALUES = 1000;

/*
    Main Function
    Do NOT modify this function unless you are asked to do so.
*/
int main()
{
    const int RANGE = 10000;
    srand(1);

    cout << "value of NUM_VALUES: " << NUM_VALUES << endl;
    vector<int> values;
    for (long i = 0; i < NUM_VALUES; i++) {
        int val = rand() % RANGE;
        values.push_back(val);
    }
    cout << "size of vector<int> values: " << values.size() << endl;

    // UNCOMMENT LINE BELOW ONCE ADDED FUNCTION
    //double medianR = median_by_ref(values);
    //cout << medianV << endl; // uncomment for vocareum submission

}

/*
    Function DEFINITIONS.
    ALL function definitions should be contained after this line.
    Your functions must not include any cout statements.
*/
// PLACE median_by_ref code after this line

