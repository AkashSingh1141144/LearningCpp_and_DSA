//  pattern 2nd

#include<iostream>
using namespace std;


int main() {
	int n;
	cout << "Enter the number of rows: ";

     cin >> n;

	 int rows = 1;
	 while(rows <=n) {
		int col1 = 1;
		while(col1 <= rows -1) {
			cout << " * ";
			col1 = col1 + 1;
		}
		rows = rows + 1;
		cout << endl;
	 }
}