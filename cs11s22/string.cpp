#include <iostream>

using namespace std;

int main(){

	string address = "6500 Soquel Drive Aptos, CA 95003";
	
	char first;
	char second;
	
	string city;

	cout << "String Demonstration" << endl;
	
	cout << "Your address is: " << endl;
	cout << "0123437890123456789012345678901234567890" << endl;
	cout << address << endl;
	
	cout << "String Length: ";
	cout << address.size() << endl; //Counts the amount of characters in string variable
	//cout << address.length() << endl; //Does the same thing as the command above just with different wording

	
	first = address[5]; //Pulls out the character on character 5
	second = address [18]; //Pulls out the character on character 18

	cout << first << second << endl; //Puts said characters [5] [18] in order

	city = address.substr(18,5); //Goes to character 18, and selects the first 5 characters in front of it
	
	cout << "Your city is " << city << "!" << endl; //Displays "Aptos"


	
	int see = 'C'; //character literal
	
	cout << see << endl; //This outputs the characters number (67)
	
	char ascii;
	int code;
	
	cout << "Enter an ASCII code: ";
	cin >> code;
	
	result = code;
	
	cout << "Your character is: " << result << endl;
	
	string word1 = "zebra";
	string word2 = "owl";
	string word3 = "ant";
	
	if (word1 > word2 && word2 > word3){
		cout << word1 << endl;
		cout << word2 << endl;
		cout << word3 << endl;
	}
		if (word1 < word2 && word2 < word3){
			cout << word1 << endl;
			cout << word2 << endl;
			cout << word3 << endl;
	}
	
	return 0;
}