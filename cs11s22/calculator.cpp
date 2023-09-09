#include <iostream>
#include <iomanip>

using namespace std;

int main(){
//MASSIMO GINELLA

	double cost_of_gal = 0;
	double MPG = 0;
	double miles_total = 0;
	double fuel_cost = 0;
	
	cout << "What is the current cost of a gallon of gas?" << endl;
	cout << "$";
	cin >> cost_of_gal;
	cout << "What is the MPG of your car?" << endl;
	cout << "MPG: ";
	cin >> MPG;
	cout << "How many miles will you be traveling in total?" << endl;
	cout << "Miles: ";
	cin >> miles_total;
	
	fuel_cost = (miles_total / MPG) * cost_of_gal;
	cout << "The total fuel cost of your trip will be" << endl;
	cout << "$" << fixed << setprecision(2) << fuel_cost << endl;
	
	
	return 0;
	}