#include <iostream>


using namespace std;


int main(){
	
	int total = 0;
	int amount;
	cin >> amount;
	
	while(amount >= 0){
		total = total + amount;
		cin >> amount;
	}
	
	return 0;
}