#include <iostream>

using namespace std;

int main()
{
	float sugarPriceUSD = 3,ricePricePound = 7,sardincePricePound = 6 ,coffeePriceUSD = 5 ,milkPriceUSD = 3;
	float sugarQty,riceQty,sardinceQty,coffeeQty,milkQty, totalCostPHP;
	float PHP = 57.27, pound, USD, USDtoPHP, poundtoPHP;
	USDtoPHP = PHP*USD;
	poundtoPHP = PHP*pound;
	totalCostPHP = sugarPriceUSD + ricePricePound + coffeePriceUSD + milkPriceUSD;
	
	cout << "Sugar $3\t:";
	cout << "Sugar Quantity:";
	cin >> sugarQty;
	cout << "Rice $3:\t";
	cout << "Rice Quantity:";
	cin >> riceQty;
	cout << "Sardince $3:\t";
	cout << "Sardince Quantity\t";
	cin >> sardinceQty;
	cout << "Coffee $3\t";
	cout << "Coffee Quantity\t:";
	cin >> coffeeQty;
	cout << "Milk $3\t:";
	cout << "Milk Quantity\t:";
	cin >> milkQty;
	cout << "________________________________________________________________________\n" <<endl;
	cout << "Amount to be paid in PHP";
	cin >> totalCostPHP;
	
	return 0 ;
}
