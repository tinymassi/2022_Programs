#include <iostream>

using namespace std;

int main(){

//input number. if its a multiple of 3 do fizz mult of five do buzz if multiple of both do fizzbuzz
	
	int number = 0;
	
	cout << "Input a number: " << endl;
	cin >> number;
	string output = "";
	if (number % 3 == 0)
		output += "fizz";
	if (number % 5 == 0)
		output += "buzz";
	
	cout << output << endl;
	// 
// 	if (number % 3 == 0 && number % 5 == 0){
// 		cout << "Fizzbuzz" << endl;
// 	} else if (number % 5 == 0){
// 		cout << "Buzz" << endl;
// 	} else if (number % 3 == 0){
// 		cout << "Fizz" << endl;
// 	} else{
// 		cout << "That number doesnt work, bitch." << endl;
// 	}
	


	return 0;
}