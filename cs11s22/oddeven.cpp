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

//Function that makes input string lowercase
string str_lower_converter(string lower_candidate){

	string lowr_buildr = "";
	for (int i = 0; i < lower_candidate.length(); i++){
		lower_candidate[i];
		char lower_chars = tolower(lower_candidate[i]);
		lowr_buildr = lowr_buildr + lower_chars;
	}

	return lowr_buildr;
}

//Function that outputs whichever vector has a larger size than the other
void odd_even_chooser(vector <string> even_strings, vector <string> odd_strings){

	if (even_strings.size() > odd_strings.size()){
		for (int i = 0; i < even_strings.size(); i++){
			cout << even_strings[i] << endl;
		}
	} else if (even_strings.size() < odd_strings.size()){
		for (int i = 0; i < odd_strings.size(); i++){
			cout << odd_strings[i] << endl;
		}
	}
}

//Function that counts number of characters in a lowercase string
int char_counter (string str_lower){

	int char_num = 0;
	for (int i = 0; i < str_lower.length(); i++){
		if (isalnum(str_lower[i])){
				char_num++;
		}
	}
	return char_num;
}

int main(){


	string str;
	vector <string> string_even;
	vector <string> string_odd;

	while (cin >> str){
		string fresh_str = str_lower_converter(str);
		int char_count = char_counter(fresh_str);

		if (char_count % 2 == 0){
			string_even.push_back(fresh_str);
		} else {
			string_odd.push_back(fresh_str);
		}
	}

	odd_even_chooser(string_even, string_odd);


	return 0;
}
