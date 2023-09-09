#include <iostream>


using namespace std;


//prompt and input a value between lo_bound and hi_bound
int rangeInput(string prompt, int low_bound, int high_bound){
	int input;
	
	cout << "Enter a value for " << prompt << " ";
	cout << "(" << low_bound << "-" << high_bound << "): ";
	cin >> input;
	
	//while the input isn't good, try again...
	while (input > high_bound || input < low_bound){
		cout << "Invalid Entry, try again: ";
		cout << "Enter an integer value for " << prompt << " ";
		cout << "(" << low_bound << "-" << high_bound << "): ";	
		cin >> input;
	
	}
	
	return input;
	
	
	//return low_bound + (high_bound - low_bound) / 2;


}


int main(){


	cout << "Input Range Tester" << endl;

	int hours, minutes, seconds, day;
	
	hours = rangeInput("hours", 0, 23);
	minutes = rangeInput("minutes", 0, 59);
	seconds = rangeInput("seconds", 0, 59);
	day = rangeInput("day of the week", 1, 7);
	
	
	
	//cout << result << endl;
	
	cout << hours << ":" << minutes << ":" << seconds << endl;
	
	return 0;
}