#include <iostream>
using namespace std;

int main() {
	int a = 123;
	cout << "The value of a is" << endl << a << endl;

	char b = 'a';
	cout << "The value of b is " << b << endl;

	float f = 1.2;
	cout << "The value of f is " <<  f  << endl;

	bool bl = true;
	cout << bl << endl;

	double d = 1.23456789;
	cout << d << endl;

	int size = sizeof(d);
	cout << "Size of a is " << size << endl;
}