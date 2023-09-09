#include <iostream>
#include <iomanip>

using namespace std;

int main(){


	double amount_initial = 0.0;
	double percent = 0.0;
	double inc_tax = 0.0;

	cout << "Input your amount in dollars and cents: $";
	cin >> amount_initial; 
	cout << endl;

	if (amount_initial <= 50000){
		double percent = amount_initial * .01;
		double inc_tax = percent;
		cout << "Your income tax is: $" << fixed << setprecision(2) << inc_tax << endl;
	} else if (amount_initial > 50000 && amount_initial <= 75000){
		double percent = amount_initial * .02;
		double inc_tax = percent;
		cout << "Your income tax is: $" << fixed << setprecision(2) << inc_tax << endl;
	} else if (amount_initial > 75000 && amount_initial <= 100000){
		double percent = amount_initial * .03;
		double inc_tax = percent;
		cout << "Your income tax is: $" << fixed << setprecision(2) << inc_tax << endl;
	} else if (amount_initial > 100000 && amount_initial <= 250000){
		double percent = amount_initial * .04;
		double inc_tax = percent;
		cout << "Your income tax is: $" << fixed << setprecision(2) << inc_tax << endl;
	} else if (amount_initial > 250000 && amount_initial <= 500000){
		double percent = amount_initial * .05;
		double inc_tax = percent;
		cout << "Your income tax is: $" << fixed << setprecision(2) << inc_tax << endl;
	} else if (amount_initial > 500000){
		double percent = amount_initial * .06;
		double inc_tax = percent;
		cout << "Your income tax is: $" << fixed << setprecision(2) << inc_tax << endl;
	}


	return 0;
}