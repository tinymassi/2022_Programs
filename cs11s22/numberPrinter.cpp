#include <iostream>

using namespace std;

//turn a digit in the range 0....9 
//into a sting "zero" .... "nine"
string digitName(int n){
	if (n == 9) return "nine";
	if (n == 8) return "eight";
	if (n == 7) return "seven";
	if (n == 6) return "six";
	if (n == 5) return "five";
	if (n == 4) return "four";
	if (n == 3) return "three";
	if (n == 2) return "two";
	if (n == 1) return "one";
	return "zero";

}

//turn a number in the range 10....19
//into a string "ten"...."nineteen"
string teensName(int n){
	if (n == 19) return "nineteen";
	if (n == 18) return "eighteen";
	if (n == 17) return "seventeen";
	if (n == 16) return "sixteen";
	if (n == 15) return "fifteen";
	if (n == 14) return "fourteen";
	if (n == 13) return "thirteen";
	if (n == 12) return "twelve";
	if (n == 11) return "eleven";
	return "ten";

}

//turn a number in the range 20....99
//into a string "twenty"...."ninety"
string tensName(int n){
	if (n >= 90) return "ninety";
	if (n >= 80) return "eighty";
	if (n >= 70) return "seventy";
	if (n >= 60) return "sixty";
	if (n >= 50) return "fifty";
	if (n >= 40) return "forty";
	if (n >= 30) return "thirty";
	return "twenty";

}

//turn a number in the range 100....999
//into a string "one hundred"...."nine hundred"
string hundredsName(int n){
	string result;
	
	int hundreds_digit = n/ 100;
	
	result += digitname(hundreds_digit);
	result += " hundred ";
		
	return result;
}

//turns an integer in range 0....999
//into a string of words
string numberPrinter(int n){

	if (n > 99){
		result += hundredsName(n) + " ";
		n = n % 100;
	}
	
	if (n > 19){
		result += tensName(n) + " ";
		n = n % 10;
	} else if (n > 9) {
		result += teensName(n) + " ";
		n = n % 10;
	} else {
		result += digitName(n);
	}
	
	result += digitName(n);

	return result;
}


int main(){

	int n = 1;
	
	cout << " n ?";
	cin >> n;
	string result;
	
	while (n >= 0 && n < 1000){
		result = numberPrinter(n)
		cout << result << endl;
		
		cout << " n ?";
		cin >> n;	
	
	}
	

	cout << result << endl;

	return 0;
}