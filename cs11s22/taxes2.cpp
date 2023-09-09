#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	double amount = 0;
	double inc_tax = 0;
	
	cout << "Enter your amount of money in dollars and cents: $";
	cin >> amount;

	cout << fixed << setprecision(2) << endl;

	if (amount < 50000){ //BUCKET 1
		inc_tax = amount * .01;
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > 50000 && amount <= 75000){ //BUCKET 1 AND 2
		inc_tax = (amount - 50000) * .02 + 500; //1% bucket will always fill to 50k
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > 75000 && amount <= 100000){ //BUCKET 1, 2, AND 3
		inc_tax = (amount - 75000) * .03 + 1000;
		cout << "Your income tax is: $" << inc_tax<< endl;
	} else if (amount > 100000 && amount <= 250000){ //BUCKET 1, 2, 3, AND 4
		inc_tax = (amount - 100000) * .04 + 1750;
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > 250000 && amount <= 500000){ //BUCKET 1, 2, 3, 4, AND 5
		inc_tax = (amount - 250000) * .05 + 7750;
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > 500000){ //BUCKET 1, 2, 3, 4, 5, AND 6
		inc_tax = (amount - 500000) * .06 + 20250;
		cout << "Your income tax is: $" << inc_tax << endl;
	}
	
	
	return 0;
}
