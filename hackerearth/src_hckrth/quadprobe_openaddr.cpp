/*
Quadratic Probing

This collision reduction technique utilized open addressing, much
like linear probing. However, it differs in that the interval between
selecting indices varies depending on an arbitrary polynomial constant
that is computed based on probe sequence iterations. The iteration value is 
squared, hence the quadratic designation

Assumptions:
Data set has no more than 20 elements
Hash function will return values from 0 to 19
Elements within the data set are unique

*/

#include <iostream>
#include "hashfunc_hdr.h"

using namespace std;

//Global variable initialization
string hashTable[21];
int hashTableSize = 21;

//Insertion function
void insert(string S){
	//Compute hash index with hashing function
	int index = hashFunc(hashTableSize);
	//Search for empty indices and roll back if index exceeds hash table size
	int h = 1;
	while(hashTable[index] != ""){
		index = (index + h*h) % hashTableSize;
		h++;
	}
	hashTable[index] = S;
}

//Search function
void search(string S){
	//Compute hashing index with hashing function
	int index = hashFunc(hashTableSize);
	//Search for empty indices and roll back if it exceeds table dimensions
	int h = 1;
	while(hashTable[index] != S and hashTable[index] != ""){
		index = (index + h*h) % hashTableSize;
		h++;
	}
	//Determine if the element is in the hash table
	if(hashTable[index] == S){
		cout << S << " has been found." << endl;
	}
	else{
		cout << S << " had not been found." << endl;
	}
}

//Main function
int main(){
	string V = "pruit igoe";
	insert(V);
	search(V);
	
	return 0;
}