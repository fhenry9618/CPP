#include <iostream>

using namespace std;

int main() {

	//var declarations and definitions
	char digit;
	int checksum = 0;

	//prompt for user number:
	cout << "Enter a six-digit number: ";

	for (int i = 1; i <= 6; i++) {
		cin >> digit;
		checksum += digit - '0';
	}

	//output checksum:
	cout << "Checksum is " << checksum << ". \n";

	if (checksum % 10 == 0) {//for valid checksums
		cout << "Checksum is divisible by 10. Valid. \n";
	} else {//for invalid checksums
		cout << "Checksum is not divisible by 10. Invalid. \n";
	}

	return 0;
}
