#include <iostream>
#include <string>

using namespace std;

int main(){

	double grade = 0;
	int class_type = 0;
	int answer = 0;

	cout << "What is your score in the class?" << endl;
	cin >> grade;
	cout << "Is your class pass, or no pass? If yes, input (0) if no, input (1)" << endl;
	cin >> class_type;
	
	if (class_type == 0){
		cout << "Did you pass? If yes, input (0) if no, input (1)" << endl;
		cin >> answer;
		if (answer == 1){
			cout << "Your grade in this class was below 70" << endl;
		} else if (answer == 0){
			cout << "Your grade in this class was above 70" << endl;
		}
	} else{
	
		if (grade >= 90){
			cout << "Your grade is an A" << endl;
		} else if (grade >= 80 && grade < 90){
			cout << "Your grade is a B" << endl;
		} else if (grade >= 70 && grade < 80){
			cout << "Your grade is a C" << endl;
		} else if (grade >= 60 && grade < 70){
			cout << "Your grade is a D" << endl;
		} else if (grade < 60){
			cout << "Your grade is an F" << endl;
		}
		}
	
	return 0;
}