#include <iostream>

using namespace std;

int main(){

	
	//int age = 0; //THIS IS FOR AGE THING
	
	//string name; //THIS IS FOR NAME THING
	
	double hoursWorked = 0.0;
	double hourlyPay = 15.0;
	double grossWeeklyPay = 0.0;
	
	//cout << "Hello, how old are you?";
	//cin >> age;
	//cout << "Next year you will be " << age + 1 << "." << endl;
	
	
	//cout << "What is your name? ";
	//getline (cin, name); //getline makes it so program outputs spaces in entry
	//cout << "Hello, " << name << ". Nice to meet you!" << endl;
	
	cout << "How many hours did you work this week? ";
	cin >> hoursWorked;
	cout << "What is your hourly pay rate? ";
	cin >> hourlyPay;
	  
	//cout << "Your weekly pay is " << hoursWorked * hourlyPay << "$" << endl;
	
	grossWeeklyPay = hoursWorked * hourlyPay; //This is an assignment statement
	cout << "Your weekly pay is $" << grossWeeklyPay << endl;
	
	return 0;
	
}