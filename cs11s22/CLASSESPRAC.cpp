#include <iostream>

using namespace std;

class NumberCounter{

	public:
	NumberCounter();
		int counter_adder();
		void display();
	
	private:
		int counter;

};

NumberCounter::NumberCounter(){
	counter = 0;
}

int NumberCounter::counter_adder(){
	
	string input;
	while (cin >> input){
		if (input == "+"){
			counter += 1;
		} else if (input == "reset"){
			counter = 0;
		}
	}

	return counter;
}

void NumberCounter::display(){
	cout << counter << endl;
}

int main(){

	NumberCounter input;
	input.counter_adder();
	
	input.display();


	return 0;
}
