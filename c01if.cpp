#include <iostream>

using namespace std;

int main(){
	char answer;
	cout << "is it raining? [y=yes]: ";
	cin >> answer;
	if (answer == 'y'){
		cout << "get an umbrella.";
	}
	return 0;
}