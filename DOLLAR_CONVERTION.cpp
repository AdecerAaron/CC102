#include <iostream>

using namespace std;

int main ()
{	
	float money;
	string currency;
	
	cout << "CURRENCY CONVERTER\n";
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "Enter the current you want to convert\n";
	cin >> money;
	cout << "--------------------------------------------------------------------------" << endl;
	float dollars, peso = 55.98, indolpeso = 0.018;
	
	float USD = money*0.018;
	float PHP = peso*money;
	
	cout << "Inter PHP to convert USD to PHP,| Enter USD for PHP to USD\n" ;
	cin >>currency;
	cout << "--------------------------------------------------------------------------" << endl;
	if (currency == "PHP"){
		cout << money << " Dollars to PHP = " << PHP;
	}
	
	else if (currency == "USD"){
		cout << money << " PHP to dollars = " << USD;
	}
	return 0;
}