// sum of numbers

#include<iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "Enter the number: ";
	cin >> n;

    int i =1;
	while(i <= n) {
		sum = sum + i;
		i = i + 1;
	}
	cout << "value of sum is: " << sum << endl;
}