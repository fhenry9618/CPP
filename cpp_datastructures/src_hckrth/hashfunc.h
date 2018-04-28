/*

Hashing Algorithm and Function Header

This header file contains functions related to hashing, as well as collision reduction
algorithms and functions. It will be used in the implementation of updated hashing 
practice programs (and something else...?)

*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

//Hashing Function Library ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//Basic Hashing Function
int hashFunc(int N){
    srand(time(NULL));
    return rand() % N; //generate random indice
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//


//Linear Probing Library ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

//Insertion Function for Linear Probing
void insertLP(vector<string> &H, vector<string> S){//H is the hashtable, S is the string
    int hashTableSize = H.size();
    int index = hashFunc(hashTableSize); 

    while(H[index] != ""){//search for an empty indice 
        index = (index++) % hashTableSize;
    }
    H[index] = S;//insert string into empty indice in hashtable
}

//Search Function for Linear Probing
void searchLP(vector<string> &H, vector<string> S){
    int hashTableSize = H.size();
    int index = hashFunc(hashTableSize);

    while(H[index] != S and H[index] != ""){
        index = (index++) % hashTableSize;
    }

    //Check for string in non-empty hash indice:
    if(H[index] == S){
        cout << S << " has been found." << endl;
    }
    else{
        cout << S << " has not been found." << endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//