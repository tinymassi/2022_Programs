//taxes.cpp
//MASSIMO GINELLA
//CS-11 INTRO TO C++

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	double amount = 0;
	double inc_tax = 0;
	
	cout << "Enter your amount of money in dollars and cents: $";
	cin >> amount;

	cout << fixed << setprecision(2) << endl;
	
	const int TAXBRACK1 = 50000;	const int TAXBRACK4 = 250000;
	const int TAXBRACK2 = 75000;	const int TAXBRACK5 = 500000;
	const int TAXBRACK3 = 100000;	const int TAXBRACK6 = 500000;
	
	double const TAXRATE1 = .01;	double const TAXRATE4 = .04;
	double const TAXRATE2 = .02;	double const TAXRATE5 = .05;
	double const TAXRATE3 = .03;	double const TAXRATE6 = .06;
	
	double TAX1 = TAXRATE1 * TAXBRACK1;
	double TAX2 = TAXRATE2 * (TAXBRACK2 - TAXBRACK1) + TAX1;
	double TAX3 = TAXRATE3 * (TAXBRACK3 - TAXBRACK2) + TAX2;
	double TAX4 = TAXRATE4 * (TAXBRACK4 - TAXBRACK3) + TAX3;
	double TAX5 = TAXRATE5 * (TAXBRACK5 - TAXBRACK4) + TAX4;
	
	
	if (amount < TAXBRACK1){ //BUCKET 1
		inc_tax = amount * TAXRATE1;
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > TAXBRACK1 && amount <= TAXBRACK2){ //BUCKET 1 AND 2
		inc_tax = (amount - TAXBRACK1) * TAXRATE2 + TAX1; //1% bucket will always fill to 50k
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > TAXBRACK2 && amount <= TAXBRACK3){ //BUCKET 1, 2, AND 3
		inc_tax = (amount - TAXBRACK2) * TAXRATE3 + TAX2;
		cout << "Your income tax is: $" << inc_tax<< endl;
	} else if (amount > TAXBRACK3 && amount <= TAXBRACK4){ //BUCKET 1, 2, 3, AND 4
		inc_tax = (amount - TAXBRACK3) * TAXRATE4 + TAX3;
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > TAXBRACK4 && amount <= TAXBRACK5){ //BUCKET 1, 2, 3, 4, AND 5
		inc_tax = (amount - TAXBRACK4) * TAXRATE5 + TAX4;
		cout << "Your income tax is: $" << inc_tax << endl;
	} else if (amount > TAXBRACK6){ //BUCKET 1, 2, 3, 4, 5, AND 6
		inc_tax = (amount - TAXBRACK5) * TAXRATE6 + TAX5;
		cout << "Your income tax is: $" << inc_tax << endl;
	}
	

	return 0;
}
