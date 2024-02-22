// Print "odd" if the input value is odd, otherwise print "even".

#include <iostream>
using namespace std;


int main() {

	int inputUser1;
	// int inputUser2;

	cout << "Please enter a number:";
	cin >> inputUser1;

	if(inputUser1 % 2 == 0) {
		cout << "The given number is -> even" << endl;
	}
	else {
		cout << "The give number is -> odd" << endl;
	}

	return 0;
}