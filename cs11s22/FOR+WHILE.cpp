#include <iostream>
#include <iomanip>

using namespace std;

int main(){


	const double RATE = 0.05;
	const double INITIAL_BALANCE = 10000.00;
	double balance = INITIAL_BALANCE;
	int numYears;
	
	cout << "investment calculator" << endl;
	cout << "Invest $" << balance << " at " << RATE * 100.0 << "%" << endl;
	cout << "for how many years? "; 
	cin >> numYears;
	
	cout << fixed << setprecision(2);
	
	for(int year = 1; year <= numYears; year++){ //the "year" variable has been declared in the "for" loop! it only exists while in the loop!
		
		balance = balance + (balance * RATE);
		
		cout << setw(4) << year << setw(13) << balance << endl;
		
	}

	cout << "Your balance is $" << balance << endl;
	
	double withdraw;
	
	cout << "How much would you like to withdraw? $";
	cin >> withdraw;
	
	if (withdraw <= balance){
		cout << "Here is $" << withdraw << endl;
		balance = balance - withdraw;
	} else {
		cout << "Insufficient funds." << endl;
	}

	cout << "Your balance is $" << balance << endl;
	
	return 0;
}