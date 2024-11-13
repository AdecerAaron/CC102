#include <iostream>

using namespace std;

int main(){
	char answer;
	cout << "is it raining? [y=yes]: ";
	cin >> answer;
	if (answer == 'y'){
		cout << "get an umbrella.";
	}
	else if (answer == 'n') {
		cout << "Is it sunny";
	}
	return 0;
}
