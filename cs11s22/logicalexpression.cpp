#include <iostream>

using namespace std;


int main(){

	int age = 0;

	cout << "How old are you? ";
	cin >> age;

	if (age >= 18){
		cout << "A: You can (and should) vote in the next election!" << endl;
	} else if (age > 13){
		cout << "A: You are not eligible to vote, but you can still take to the streets!" << endl;
	} else {
		cout << "A: Better stay at home." << endl;
	}
	
	
	
	
	if (age >= 18){
		cout << "B: You can (and should) vote in the next election!" << endl;
	} 
	if (age > 12 && age <18){
		cout << "B: You are not eligible to vote, but you can still take to the streets!" << endl;
	} 
	if (age <= 12){
		cout << "B: Better stay at home." << endl;
	}
	
	
	
	
	if (age > 12){
		if (age >= 18){
			cout << "C: You can (and should) vote in the next election!" << endl;
		} else {
			cout << "C: You are not eligible to vote, but you can still take to the streets!" << endl;
		}
	} else {
		cout << "C: Better stay at home." << endl;
	
	}
	
	
	cout << "Next year..." << endl;
	
	//age = age + 1; //age is now one larger
	//age += 1; //add one into age
	age++; //add one to age
	
	if (age >=18){
		cout << "You can drink beer legally in public." << endl;
	} else {
		cout << "You cannot drink legally in public." << endl;
	}
	
	cout << "Goodbye!" << endl;
	
	
		return 0;
}
