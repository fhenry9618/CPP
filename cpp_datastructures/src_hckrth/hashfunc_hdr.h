/*
Hashing Function Header File

This header file contains (for now) the hash function so I don't have to keep
writing it in files when I need it for a program.
*/

#include <iostream>
#include <ctime>

using namespace std;

//Basic Hashing function
int hashFunc(int N){
	srand(time(NULL));
	int randnum = rand() % N;
	return randnum;
}