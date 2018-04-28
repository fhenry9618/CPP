/*
Double Hashing

This program demonstrates another common form of hash collison reduction, 
in the form of double hashing. Part of the open addressing family of 
techniques, this operates similar to the linear probe, albeit using a 
second hash function to determine the next index in the probe sequence.

Assumptions:
There are no more than 20 elements in this data set.
The hash function will return values in the range 0 to 19.
The elements in the data set are all unique.

*/

#include <iostream>
#include "hashfunc_hdr.h"

using namespace std;

//Global variable declaration
string hashTable[21];
int hashTableSize = 21;

//Insertion function
void insert(string S){
	//Computation of indices via hashing (first for initial, second for probe)
	int index = hashFunc(hashTableSize);
	int indexH = hashFunc(hashTableSize);
	
	//Search table for empty index and roll back if index exceeds table dimensions
	while(hashTable[index] != ""){
		index = (index + indexH) % hashTableSize;
		hashTable[index] = S;
	}
}

//Search function
void search(string S){
	//Computation of indices via hashing
	int index = hashFunc(hashTableSize);
	int indexH = hashFunc(hashTableSize);
	
	//Search table for empty indices and roll back if exceeding dimensions
	while(hashTable[index] != S and hashTable[index] != ""){
		index = (index + indexH) % hashTableSize;
	}
	//Determine if the element is present in the hash table
	if(hashTable[index] == S){
		cout << S << " has been found." << endl;
	}
	else{
		cout << S << " has not been found." << endl;
	}
}

//Main function
int main(){
	string V = "ettore bugatti";
	insert(V);
	search(V);
	
	return 0;
}