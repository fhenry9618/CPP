/*
This program features a function called 'print()' that takes a string
for labeling the output and a integer vector for printing out.
*/

//dependencies

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//prototyping

void print(string, vector<int>);


//main function is for showing it off

int main() {

    //create example vector and string
    
    vector<int> thousandElt(1000);
    string vecName = "thousandElt";

    //fill example vector 

    for (int i = 0; i < 1000; ++i) {
        thousandElt.at(i) = i + 1;
    }

    //call function

    print(vecName, thousandElt);

    return 0;
}

//definition of printed vector

void print(string vectorName, vector<int> cppVec) {

    cout << "Now printing int vector: " << vectorName << "\n";

    for (int i = 0; i < cppVec.size(); ++i) {
        cout << cppVec.at(i) << "\n";
    }

}