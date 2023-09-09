#include <iostream>
#include <iomanip>

using namespace std;

bool bank_withdraw (double &balance, double withdraw){ //ADDING & TO VARIABLE
													   //MAKES BOTH VARIABLES IN 
													   //FUNCTION AND MAIN THE SAME
	double DAILY_LIMIT = 100.00;

	cout << "Bank_withdraw function" << endl;
	cout << " Attempting to withdraw ";
	cout << fixed << setprecision(2) << withdraw;
	cout << "from account with balance $";
	cout << fixed << setprecision(2) << balance << endl;
	
	if (balance >= withdraw && withdraw <= DAILY_LIMIT){
		balance -= withdraw;
		cout << "Successful withdrawal." << endl;
		return true;
	}
	cout << "Denied." << endl;
	return false;
}


int main(){

	double alice_balance = 800.00;
	double bob_balance = 500.00;
	
	double withdraw;
	
	cout << "Alice initial balance: ";
	cout << "$" << fixed << setprecision(2) << alice_balance << endl;
	
	cout << "Bob initial balance: ";
	cout << "$" << fixed << setprecision(2) << bob_balance << endl;

	cout << "Alice, how much to withdraw? $";
	cin >> withdraw;
	
	if (bank_withdraw(alice_balance, withdraw)){
		cout << "Here is $" << fixed << setprecision(2) << withdraw << endl;
	}
	
	cout << "Bob, how much to withdraw? $";
	cin >> withdraw;
	
	if (bank_withdraw(bob_balance, withdraw)){
		cout << "Here is $" << fixed << setprecision(2) << withdraw << endl;
	}


	cout << "Alice final balance: ";
	cout << "$" << fixed << setprecision(2) << alice_balance << endl;

	
	return 0;
}