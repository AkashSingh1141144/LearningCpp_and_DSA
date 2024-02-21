// Write a C++ Program to swap two numbers with the help of a third variable.

#include <iostream>
using namespace std;

int main() {
	int a = 2;
	int b = 3;

	int c;

	c = a;
	a = b;
	b = c;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}