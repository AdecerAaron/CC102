#include <iostream>
using namespace std;
int main() {
	int age;
	char answer, YnO;
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
		cout << "Enter time of show [M = Matinne, E = Evening] ";
			cin >> answer;
			if (answer == 'M'){
			cout << "Amount = 7.50";
		} else if (answer == 'E'){
			cout << "Amount = 10.50";
		} else {
			cout << "invalid Output";
		}
		
	}else if (age >= 13 && age < 16){
		cout << "rated G,PG Movies" << endl;
		cout << "Enter time of show [M = Matinne, E = Evening] ";
		cin >> answer;
			if (answer == 'M'){
			cout << "Amount = 7.50";
		} else if (answer == 'E'){
			cout << "Amount = 10.50";
		} else {
			cout << "invalid Output";
		}
	}else if (age < 16) {
		cout << "with parent?[y = YES, n = NO] ",
		cin >> YnO;
		if (YnO == 'n'){
			cout << "rated G,PG,R movies" << endl;
		}else if (YnO == 'y'){
			cout << "rated G,PG, movies" << endl;	
		}else {
			cout << "Invalid Output";
			
		}
		cout << "Enter time of show [M = Matinne, E = Evening] ";
			cin >> answer;
			if (answer == 'M'){
			cout << "Amount = 7.50";
		} else if (answer == 'E'){
			cout << "Amount = 10.50";
		} else {
			cout << "invalid Output";
		}
	}else if (age > 16){
		cout << "rated G,PG,R Movies" << endl;
		cout << "Enter time of show [M = Matinne, E = Evening] ";
		cin >> answer;
			if (answer == 'M'){
			cout << "Amount = 7.50";
		} else if (answer == 'E'){
			cout << "Amount = 10.50";
		} else {
			cout << "invalid Output";
		}
	}
return 0;	
}	