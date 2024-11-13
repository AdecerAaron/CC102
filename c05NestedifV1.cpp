#include <iostream>

using namespace std;

int main(){
	char answer;
	cout << "is it raining? [y=yes]: ";
	cin >> answer;
	if (answer == 'y'){
		cout << "get an umbrella." << endl;
		cout << "Rainfall Warning[ r=red,o=orange,y=yellow]: ";
		cin >> answer;
		if (answer == 'r') {
			cout << "Extreme: Landslide and flooding are imminent.";
		}
		else if (answer == 'o') {
			cout << "Serious : Expected Flooding";
		}
		else if (answer == 'y') {
			cout << "MOderate : possible Flooding";
		}
		else {
			cout << "Invalid Input";
		}
	}
	else if (answer == 'n') {
		cout << "Is it sunny";
	}
	else {
		cout << "Invalid input.";
	}
	return 0;
}
