#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter a character:";
	cin >> ch;

	if(ch >= 'a' && ch <= 'z')  {
		cout << "The character is a lowercase letter. " << endl;
	}
	else if(ch >= 'A' && ch <= 'Z') {
		cout << " The character is an Uppercase letter." << endl;
	}
	else if(ch >= '0' && ch <= '9') {
		cout << "The character is a numeric.";
	}
	else {
		cout << "The character is not found";
	}
	return 0;
}