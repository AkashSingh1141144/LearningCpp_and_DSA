#include <iostream>
using namespace std;

int main() {
    int userInput;
    cout << "Enter a number: ";

    cin >> userInput;

    if (userInput > 0) {
        cout << "The number is positive" << endl;
    } else if (userInput < 0) {
        cout << "The number is negative" << endl;
    } else {
        cout << "The number is zero" << endl;
    }

    return 0;
}
