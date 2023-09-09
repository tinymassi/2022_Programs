#include <iostream>


using namespace std;


int main(){
	
	int input;
	int max;
	int min;
	
	cout << "The MinMax value program" << endl;
	cout << "featuring the high water mark algorithm" << endl;
	
	cout << "Enter a series of integers (ctrl-d) and I'll tell you the min and max:" << endl;
	
	cin >> input;
	max = input;
	min = input;
	
	while(cin >> input){
	
		if (input < min){
			min = input;
		}
		if (input > max){
			max = input;
		}

	
	}
	
	cout << "The max is " << max << endl;
	cout << "The min is " << min << endl;
	
	return 0;
}