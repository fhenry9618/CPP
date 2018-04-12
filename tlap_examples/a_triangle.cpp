#include <iostream>
#include <cmath>

using std:: cin;
using std:: cout;
using std:: abs;
//only using these two std functions for this program

int main() {
	
	for (int row = 1; row <= 7; row++) {
		for (int col = 4 -  abs(4 - row); col >= 1; col--) {
			cout << "#";
		}
		cout << "\n";
	}

return 0;
}
