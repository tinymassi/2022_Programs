#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main(){

	srand(time(0)); // prepare RNG

	const int CAPACITY = 10;
	int num[CAPACITY];
	
	
	for (int i = 0; i < CAPACITY; i++){ //generates random numbers for array
	
		num[i] = rand() % 100 + 1;
	
	}
	
	cout << "Every element at an even index: ";
	for (int i = 0; i < CAPACITY; i++){ //prints every element at even index
	
		if (i >= 0){
		
			if (i % 2 == 0){
				cout << num[i] << " ";
			}
		}
	}
	
	cout << endl;
	
	cout << "Every even element: ";
	for (int i = 0; i < CAPACITY; i++){ //prints every even element
	
		if (num[i] % 2 == 0){
			cout << num[i] << " ";
		}
	}
	
	cout << endl;
	
	cout << "All elements in reverse order: ";
	for(int i = CAPACITY - 1; i >= 0; i--){ //prints all elements in reverse order
		cout << num[i] << " ";
	}
	cout << endl;
	
	cout << "First and last element: ";
	cout << num[0] << " " << num[CAPACITY - 1] << endl; //prints first and last element
	




	return 0;
}
