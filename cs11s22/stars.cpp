#include <iostream>


using namespace std;


int main(){
	
	
	
	const int ROWS = 10;
	const int COLUMNS = 20;
	
	//outer loop
	for(int i = 0; i < ROWS; i++){
		//inner loop
		for(int j = 0; j < i; j++){
			cout << "*";
	
		} //for j
		cout << endl;
	} //for i
	
	return 0;
}