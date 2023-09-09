#include <iostream>


using namespace std;


int main(){
	
	int i = 1;
	int sum = 0;
	
	while (i <= 100){
	
		i++;
		
		if(i % 2 == 0){
			sum = sum + i;
			cout << sum << endl;
		}
	
	}
	
	cout << sum << endl;


	return 0;
}