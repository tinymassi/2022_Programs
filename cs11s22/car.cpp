#include <iostream>

using namespace std;

int main(){

	double gallon_number = 0;
	double mpg = 0;
	double car_distance = 0;
	
	
	cout << "What is the number of gallons in your gas tank?" << endl;
	cin >> gallon_number; 
	
	cout << "What is the mpg of your car?" << endl;
	cin >> mpg; 

	car_distance = gallon_number * mpg;
	cout << "Your car can travel " << car_distance << " miles!" << endl;

}