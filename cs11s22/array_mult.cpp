#include <iostream>


using namespace std;


void array_multiply(int a[], const int SIZE, int factor){

	for (int i = 0; i < SIZE; i++){
	
		a[i] *= factor;
	
	}


}

int main(){


	int data[] = { 2, 4, 6, 8, 10, 12, 14};


	array_multiply(data, 7, 3);
	
	
	for (int i = 0; i < 7; i++){
		cout << data[i] << " ";
	}
		cout << endl;


	return 0;
}
