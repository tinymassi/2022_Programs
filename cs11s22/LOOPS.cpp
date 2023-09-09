#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	double balance = 10000.00;
	const double TARGET = balance * 10.0;
	const double RATE = 0.05;
	double interest;
	int years = 0; //How many years it takes to double our money
	
	cout << "Your starting balance is: $" << fixed << setprecision(2) << balance << endl;
	cout << "Your starting goal is: $" << TARGET << endl;
	
	
	cout << setw(7) << "years" << setw(10) << "interest" << setw(13) << "balance" << endl;
	cout << setw(7) << "0" << setw(10) << "-" << setw(13) << balance << endl; //the setw() command spaces things out so it can make a nice table with even spacing

	while (balance < TARGET){
		interest = balance * RATE;
		balance = balance + interest;	
		years++; //Adds 1 to variable years every time the while loop is repeated
		cout << setw(7) << years << setw(10) << interest << setw(13) << balance << endl;
	}
	
	cout << "In " << years << " years, your balance will be $" << balance << endl;


	return 0;
}