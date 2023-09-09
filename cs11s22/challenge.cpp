//print the even numbers from -100 to 100
#include <iostream>

using namespace std;

int main(){

	int number_max = 100;

	for (int number = -100; number <= number_max; number++){
	
		if (number < 0){
		
			if (number % 2 == 0){
				cout << number << endl;
			} else{
				cout << endl;
			}
		} else if (number > 0){
			
			if (number % 2 == 0){
				cout << number << endl;
			} else{
				cout << endl;
			}
		
		}
	}


	// for(int i = -100; i < 101; i += 2) {
// 		cout << i << endl;
// 	}

	return 0;
}

