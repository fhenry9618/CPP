/*
Linear Probing/Open Addressing

This collision reduction technique uses a probe sequence to find open indices
whenever a hashing collsion occurs. It is also referred to as open addressing
because the hash function value does not determine the index of the element. 
The probe sequence finds open indices at a fixed interval, hence the 'linear'
designation.

Assumptions:
Data set has at most 20 elements
Hashing function returns an integer from 0 to 19
Each element in the data set is unique

*/

#include <iostream>
#include <ctime>
#include "hashfunc_hdr.h"

using namespace std;

//Global variable declaration
string hashTable[21];
int hashTableSize = 21;

//Insertion fruntion for Hash Table
void insert(string S){
	//Compute index via hashing function
	int index = hashFunc(hashTableSize);
	//Search for empty index and roll back if index exceeds hash table size
	while(hashTable[index] != ""){
		index = (index + 1) % hashTableSize;
	}
	hashTable[index] = S;
}

//Search function for hashed element
void search(string S){
	//Compute index with hashing function
	int index = hashFunc(hashTableSize);
	//Search for empty index and roll back if it exceeds hash table size
	while(hashTable[index] != S and hashTable[index] != ""){
		index = (index + 1) % hashTableSize;
	}
	//Check for element's presence in hash table
	if(hashTable[index] == S){
		cout << S << " has been found." << endl;
	}
	else{
		cout << S << " has not been found." << endl;
	}
}

//Main function
int main(){
	string V = "joneses";
	insert(V);
	search(V);
	return 0;
}