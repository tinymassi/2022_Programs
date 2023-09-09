//arraymax.cpp
//cs11 example program
//Nov 8th 20222

//find max with array

//input 10 items, print them, mark the max


#include <iostream>


using namespace std;

//return the index of the maximum value in the array
int maxArrayIndex(int values[], const int SIZE){
	int max = values[0];
	int index = 0;
	
	for (int i = 1; i < SIZE; i++){
		if (values[i] > max){
			max = values[i];
			index = i;
		}
	}
	return index;
}

int main(){


	const int SIZE = 10;
	int values[SIZE];

	for(int i = 0; i < SIZE; i++){
		cout << "input item " << i+1 << " of " << SIZE << ": ";
		cin >> values[i];
	
	
	}
	
	cout << endl;
	
	int max_index = maxArrayIndex(values, SIZE);
	
	for(int i=0; i < SIZE; i++){
	
		cout << values[i];
		
		if (i == max_index){
		
			cout << " <------ max";
		
		}
		cout << endl;
	
	}


	return 0;
}