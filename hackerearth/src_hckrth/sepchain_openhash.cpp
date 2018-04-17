/*
Seperate chaining & Open Hashing example

This collision reduction technique employs linked lists to chain keys together 
when they hit an identical index via the hashing function. Uniformity is a big
need for this technique, since the compute time at the worst is O(N) with an 
especially long-linked key index.

Assumption
This hash function should return an integer from 0 to 19 when called upon.
*/

#include <iostream>
#include <vector>
#include <ctime>

#include "hashfunc_hdr.h"

using namespace std;

//Global vector we're using, as well as its size.
vector <string> hashTable[20];
int hashTableSize = 20;

//Insertion function for strings
void insert(string S){
	int index = hashFunc(hashTableSize); 
	//Push element to the specified element in the linked list
	hashTable[index].push_back(S);
}

//Search function for hash table
void search(string S){
	//Call hashing function to compute index
	int index = hashFunc(hashTableSize);
	//Search linked list at specific index
	for(int i = 0; i < hashTable[index].size(); i++){
		if(hashTable[index][i] == S){
			cout << S << " has been found." << endl;
			return;
		}
	}
	cout << S << " has not been found." << endl;
}

//Main function
int main(){	
	string V = "eedfpozipfyr";
	insert(V);
	search(V);
	return 0;
}