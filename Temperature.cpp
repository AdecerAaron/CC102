#include <iostream>
using namespace std;
int main () {
	float temperature;
	cout << "What is the temperature ";
	cin >> temperature;
	if (temperature < 32){
		cout << "Bring a heavy jacket";
	}
	else if (temperature >=32 && temperature <= 50 ) {
		cout << "Bring a light jacket";
	} 
	else if (temperature >= 51){
		cout << "not to bring a jacket";
	} else {
		cout << "invalid Output";
	}
	return 0;
}
