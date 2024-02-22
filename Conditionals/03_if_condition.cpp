#include <iostream>
using namespace std;


int main() {
    
	string userInput;
	cout << "Is it raining today? (yes/no) : ";
	cin >> userInput;


	if(userInput == "yes") {
		cout << "Yes, its raining today." << endl;
	}
	else {
		cout << "No, its not raining today." << endl;
	}

	int score1;
	int score2;

	cout << "Enter the score for team A: " << endl;
	cin  >> score1;

	cout << "Enter the score for team B: " << endl;
	cin >> score2;

	if(score1 > score2) {
		cout <<"Team A wins with a score of  " << score1 << " to " << score2; 
	}
	else if(score1 < score2) {
		cout << "Team B wins with a score of " << score2 << " to " << score1;
	}
	else if(score1 == score2) {
		cout << "Its a draw match" ;
	}

	return 0;
}


