#include <iostream>
#include <iomanip>

using namespace std;


int collatz(int n){

	if (n <= 0){
		cout << "Bad Collatz value of " << n << endl;
		return 1;
	
	}
	if (n % 2 == 0){
		//even
		return n/2;
	
	} else {
		//odd
		return 3 * n + 1;
	
	}


}
int main(){


	cout << "Collatz Conjecture" << endl;

	int n;
	int tries = 0;
	
	cout << "Enter a positive integer to start the sequence: ";
	cin >> n;
	
	cout << setw(8) << "count" << setw(8) << "n before" << setw(8) << "n after" << endl;
	while (n > 1){
		tries++;
		cout << setw(8) << tries << setw(8) << n;
		n = collatz(n);
		cout << setw(8) << n << endl;
	}
	
	cout << setw(8) << "-" << setw(8) << 1 << endl;
	
	cout << endl;
	
	cout << tries << "iterations" << endl;


	return 0;
}