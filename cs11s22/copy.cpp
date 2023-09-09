#include <iostream>


using namespace std;


int main(){
	
	int previous;
	int candidate;
	
	cout << "Duplicate finder" << endl;
	cout << "Enter integer, EOF (ctrl-d to quit)" 
	
	cin >> candidate;
	previous = candidate;
	
	while (cin >> candidate){
		if (candidate == previous){
			cout << "Duplicate Value " << candidate << endl;
		}
	
	}
	
	return 0;
}