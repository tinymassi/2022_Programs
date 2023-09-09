#include <iostream>


using namespace std;


int main(){
	
	int temp;
	int sum = 0;
	int count = 0;
	
	cout << "The average average program!" << endl;
	cout << "Enter integers, EOF (ctrl-d to quit)" << endl;
	
	while (cin >> temp){
		//cout << temp << endl
		sum = sum + temp;
		count++;
	}
	
	if (count > 0){
		double average = (double) sum/count; //the (double) is called a "cast" and it treats the thing 
										     //to the right as a double
		cout << "The sum of the numbers is " << sum << endl;
		cout << "The mean of the numbers is " << average << endl;
	} else {
		cout << "You didnt input any values." << endl;
	}
	
	return 0;
}