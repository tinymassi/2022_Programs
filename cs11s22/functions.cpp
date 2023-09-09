//functions.cpp

#include <iostream>

using namespace std;

void text_box(string s){ //the (string s) is there so that the textbox function knows that 
						 //it is being sent a string from the function call!
						 //the function is called "void" because it doesn't return 
						 //a value in the program
	int size = s.length();
	
	cout << "/";
	for (int i = 0; i < size; i++){
		cout << "-";
	}
	cout << "\\";
	cout << endl;
	
	cout << "|" << s << "|" << endl;
	
	cout << "\\";
	for (int i = 0; i < size; i++){
		cout << "-";
	}
	cout << "/";
	cout << endl;

}

int main(){

	string name;
	string address;

	cout << "What is your name? ";
	getline(cin, name); //remember that getline(cin, string) takes input with whitespace
	
	cout << "What is your address? ";
	getline(cin, address);
	
	
	cout << endl;
	text_box(name); //sends the information in variable name (local variable) 
				    //to the tex_box function. This is called a "function call"

	text_box(address);
	
	//text_box(name + address); //This textbox function call will put both strings in the function!!

	return 0;
}