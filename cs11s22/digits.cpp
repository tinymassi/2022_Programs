#include <iostream>

using namespace std;

int main(){

	long int int_value = 0;

	cout << "Give me an integer!" << endl;
	cin >> int_value;
	
	if (int_value < 0){
		int_value = int_value * -1;
	}
	
	if (int_value <= 10000000000 && int_value > 0){
		
		if (int_value < 10){
			cout << "This integer value, has 1 digit" << endl;
		} else if (int_value < 100 && int_value >= 10){
			cout << "This integer value has 2 digits." << endl;
		} else if (int_value < 1000 && int_value >= 100){
			cout << "This integer value has 3 digits." << endl;
		} else if (int_value < 10000 && int_value >= 1000){
			cout << "This integer value has 4 digits." << endl;
		} else if (int_value < 100000 && int_value >= 10000){
			cout << "This integer value has 5 digits." << endl;
		} else if (int_value < 1000000 && int_value >= 100000){
			cout << "This integer value has 6 digits." << endl;
		} else if (int_value < 10000000 && int_value >= 1000000){
			cout << "This integer value has 7 digits." << endl;
		} else if (int_value < 100000000 && int_value >= 10000000){
			cout << "This integer value has 8 digits." << endl;
		} else if (int_value < 1000000000 && int_value >= 100000000){
			cout << "This integer value has 9 digits." << endl;
		} else if (int_value < 10000000000 && int_value >= 1000000000){
			cout << "This integer value has 10 digits" << endl;
		}

	} 
		
	return 0;
}