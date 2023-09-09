#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
	
	
	
	const int MAXNUM = 10;
	const int MAXPOWER = 6;``
	
 	cout << setw(8) << "x";
 	cout << setw(8) << "x^2";
 	cout << setw(8) << "x^3";
 	cout << setw(8) << "x^4";
 	cout << endl;
	
	for(int num = 1; num <= MAXNUM; num++){
	
		for(int power = 1; power <= MAXPOWER; power++){
			cout << setw(8) << pow(num, power);
		}
		
		cout << endl;
		
	}
	return 0;
}