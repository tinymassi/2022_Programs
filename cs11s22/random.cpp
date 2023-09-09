#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
	
	srand(time(0));
	
	cout << RAND_MAX << endl << endl;
	
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl; 
	
	return 0;
}