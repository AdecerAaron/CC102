#include <iostream>
using namespace std;
int main() {
	int age;
	float answer;
	char  YnO;
	cout << "Enter your age ";
	cin >> age;
	if (age < 13) {
		cout << "with parent?[y = YES, n = NO] ",
		cin >> YnO;
		if (YnO == 'n'){
			cout << "rated G movies" << endl;
		}else if (YnO == 'y'){
			cout << "rated G,PG movies" << endl;	
		}else {
			cout << "Invalid Output";
		}
		cout << "Enter amount [Matinee = 7.50 | Evening = 10.50] ";
			cin >> answer;
			if (answer == 7.50){
			cout << "Can Go to Matinee show ";
		} else if (answer == 10.50){
			cout << "Can Go to Evening show";
		} else if (answer < 7.50){
			cout << "Not enough amount ";
		} else {
			cout << "Invalid Input " ;
		}
	}else if (age > 13 && age < 16){
		cout << "with parent?[y = YES, n = NO] ",
		cin >> YnO;
		if (YnO == 'n'){
			cout << "rated G,PG movies" << endl;
		}else if (YnO == 'y'){
			cout << "rated G,PG,R movies" << endl;	
		}else {
			cout << "Invalid Output";
		}
		cout << "Enter amount [Matinee = 7.50 | Evening = 10.50] ";
			cin >> answer;
			if (answer == 7.50){
			cout << "Can Go to Matinee show ";
		} else if (answer == 10.50){
			cout << "Can Go to Evening show";
		} else if (answer < 7.50){
			cout << "Not enough amount ";
		} else {
			cout << "Invalid Input ";
		}
	}else if (age >= 16){
		cout << "rated G,PG,R Movies" << endl;
		cout << "Enter amount [Matinee = 7.50 | Evening = 10.50] ";
			cin >> answer;
			if (answer == 7.50){
			cout << "Can Go to Matinee show ";
		} else if (answer == 10.50){
			cout << "Can Go to Evening show";
		} else if (answer < 7.50){
			cout << "Not enough amount ";
		} else {
			cout << "Invalid Input ";
		}
	}
return 0;	
}	
