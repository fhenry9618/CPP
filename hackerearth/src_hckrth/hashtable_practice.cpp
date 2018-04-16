/*
Hash table example:

This program simulates a hash table, by taking a string input 
and counting the frequency of different letter occurences. The hashing
function is implemented in such a way that compute time is O(N), N being
the size of the string.
 
*/

#include <iostream>

using namespace std;

void countFre(string S){
	for(char c = 'a'; c <= 'z'; c++){//no pun intended :)
		int frequency = 0; //resets the frequency value for each character in string
		for(int i = 0; i < S.length(); i++){
			if(S[i] == c){
					frequency++;
			}
		}
		cout << c << ' ' << frequency << endl;
	}
}

int main(){
	string myString = "asfgahsflg";
	
	countFre(myString);
	
	return 0;
}