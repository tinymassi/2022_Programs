//arraymax.cpp
//cs11 example program
//Nov 8th 20222

//find max with array

//input 10 items, print them, mark the max


#include <iostream>


using namespace std;

//return the index of the maximum value in the array
int maxArrayIndex(int values[], const int SIZE){  // hello
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

	const int CAPACITY = 10; //max capacity
	int values[CAPACITY];
	
	
	
	cout << "Enter up to " << CAPACITY <<  " integers, EOF (ctrl - d) to quit" << endl;
	
	int size = 0; //this is so we stay in the range of size
	
	while (size < CAPACITY && cin >> values[size]){
		size++;
	}
	
	cout << endl;
	int max_index = maxArrayIndex(values, size);
	
	for(int i=0; i < size; i++){
	
		cout << values[i];
		
		if (i == max_index){
		
			cout << " <------ max";
		
		}
		cout << endl;
	
	}


	return 0;
}