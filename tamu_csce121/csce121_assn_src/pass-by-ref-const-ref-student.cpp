#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

/* Function declarations */
void print_vector_contents (vector<int> &v);

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

    vector<int> values;
    for (long i = 0; i < NUM_VALUES; i++) {
        int val = rand() % RANGE;
        values.push_back(val);
    }
    cout << "size of vector<int> values: " << values.size() << endl;

    print_vector_contents(values);
    sort(values.begin(), values.end());
    print_vector_contents(values);
    //print_vector_contents(values); // uncomment this additional call to print_vector_contents(values) in step-5.

}

/*
    Function definitions.
    ALL function definitions should be contained after this line.
*/
// PLACE print_vector_contents code after this line
void print_vector_contents (vector<int> &v)
{
    // paste function body here
}


