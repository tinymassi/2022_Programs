#include <iostream>

using namespace std;

int main(){

	int num_one;
	int num_two;
	int num_three;

	cout << "Input fist integer." << endl;
	cin >> num_one;
	cout << "Input second integer." << endl;
	cin >> num_two;
	cout << "Input third integer." << endl;
	cin >> num_three;
	
	if (num_three > num_two && num_two > num_one){ //DONT DO (num_three > num_two > num_one) IT WONT WORK!	
		cout << "Increasing." << endl;
	} else if (num_three < num_two && num_two < num_one){
		cout << "Decreasing." << endl;
	} else {
		cout << "Nothing." << endl;
	}


}