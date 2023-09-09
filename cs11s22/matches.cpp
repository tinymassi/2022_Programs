#include <iostream>


using namespace std;


int main(){
	
	int temp;
	int negative = 0;
	int even = 0;
	
	cout << "The matching program!" << endl;
	cout << "Enter integers, EOF (ctrl-d to quit)" << endl;
	
	while (cin >> temp){
		//cout << temp << endl
		if (temp < 0){
			negative ++;
		} 
		if (temp % 2 == 0){
			even++;
		}
	}
	
	
	cout << "You input " << negative << " negative value";
	if (negative == 1){
		cout << "." << endl;
	} else {
		cout << "s." << endl;
	}
	
	cout << "You input " << even << " even value";
	if (even == 1){
		cout << "." << endl;
	} else {
		cout << "s." << endl;
	}
	
	return 0;
}