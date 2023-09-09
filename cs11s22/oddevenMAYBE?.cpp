//Massimo Ginella
//massimoginella12@gmail.com
//CS-11-02 Introduction to C++
//Assignment #4
//11/20/22
//This program takes in a series of strings and returns either odd, even, or no 
//strings depending on which string (odd or even) outweighs the other 



#include <iostream>
#include <vector>
#include <cctype>


using namespace std;

// int odd_even (){
// 
// 	
// 
// }

string str_lower(string lower){

	string lowr_bildr = "";
	for (int i = 0; i <= lower.length(); i++){
		lower[i];
		char lower_maker = tolower(lower[i]);
		lowr_bildr = lowr_bildr + lower_maker;
	}


	return lowr_bildr;
}

// vector <string> character_counter(vector <string> str_count){
// 	
// 	
// 	
// }

int main(){
	
	
	string str;
	vector <string> string_storer;
	
	while (cin >> str){
		string fresh_str = str_lower(str);
		string_storer.push_back(fresh_str);
	}
	
	for (int i = 0; i <= string_storer.size(); i++){
		cout << string_storer[i] << endl;
	}
	
	
	// vector <string> balls = character_counter(string_storer);
// 	
// 	for (int i = 0; i <= balls.size(); i++){
// 		cout << balls[i] << endl;
// 	}
	
	
	
	
	return 0;
}
