// Write a C++ Program to Take length and breadth of a rectangle  from user and print its area.

#include <iostream>
using namespace std;

int main() {
	int length;
	int breadth;

	cout << "Enter the Length of the Rectangle: ";
	cin >> length;

	cout << "Enter the Breadth of the Rectangle: ";
    cin >> breadth;

	int area = length * breadth;
	cout << "The Area of the Rectangle is: " << area << endl;

	return 0;
}