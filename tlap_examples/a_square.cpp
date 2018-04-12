#include <iostream>
using std:: cin;
using std:: cout;
//only using these two std functions for this program

int main() {
	
	for (int row = 1; row <= 5; row++) {
		for (int col = 6 - row; col >= 1; col--) {
			cout << "#";
		}
		cout << "\n";
	}

return 0;
}
