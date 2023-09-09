#include <iostream>

using namespace std;


// sorting
// postcondition b >= a
// (sort a and b in ascending order)
void sort2 (int &a, int &b){
	if (b < a){
		swap (a, b); // or code the swap here
	
	}

}

// swap two int values by reference
void swap (int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}



int main(){

	int a = 5;
	int b = 7;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	//swap a and b:
	
	cout << "swap" << endl;
	swap(a, b);
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	cout << "sort" << endl;
	sort2(a, b);
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;



	return 0;
}