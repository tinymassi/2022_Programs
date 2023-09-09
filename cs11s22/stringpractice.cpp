#include <iostream>

using namespace std;

int main(){

	//make a program that puts all the letters of a word on separate line
	//and also count the amount of vowels ans show the word count
	
	string word;
	
	cout << "Word manipulator program!" << endl;
	cout << "Enter a word, any word! ";
	cin >> word;
	
	int word_count = word.size();
	
	for (int i=0; i < word_count; i++){
		cout << word[i] << endl;
	}
	
	int vowel_count = 0;
	
	for (int i=0; i < word_count; i++){
		if (word[i] == 'a' || word[i] == 'A'){
			vowel_count++;
		}
		if (word[i] == 'e' || word[i] == 'E'){
			vowel_count++;
		}
		if (word[i] == 'i' || word[i] == 'I'){
			vowel_count++;
		}
		if (word[i] == 'o' || word[i] == 'O'){
			vowel_count++;
		}
		if (word[i] == 'u' || word[i] == 'U'){
			vowel_count++;
		}
	}
	
	cout << "The size of the word you entered is: " << word_count << " characters." << endl;
	cout << "The amount of vowels in your word is: " << vowel_count << endl;

	return 0;
}