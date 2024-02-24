// prim or not prime number

#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int num = 2;
	while (num < n) {
		if(n % num == 0) {
			cout <<"Not Prime for " << num << endl;
		}
		else {
			cout << "Prime for " << num  << endl;
		}
		num = num + 1;
	}
	return 0;
}