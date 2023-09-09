#include <iostream>


using namespace std;


int main(){

	string word;
	int countVowels = 0;

	cout << "Vowel Counter!" << endl;
	cout << "Enter a word: ";
	cin >> word;
	
	int size = word.size();
	cout << "Size: " << size << endl;
	
	for (int i=0; i < size; i++){
		
		if (word[i] == 'a' || word[i] == 'A'){ // THE || MEANS "OR" AND BASICALLY JUST GIVES
			countVowels++;					   // A SECOND OPTION FOR THE CODE TO KEEP IN MIND
		} 
		if (word[i] == 'e' || word[i] == 'E'){
			countVowels++;
		} 
		if (word[i] == 'i' || word[i] == 'I'){
			countVowels++;
		} 
		if (word[i] == 'o' || word[i] == 'O'){
			countVowels++;
		} 
		if (word[i] == 'u' || word[i] == 'U'){
			countVowels++;
		} 
		if (word[i] == 'y' || word[i] == 'Y'){
			countVowels++;
		} 
	}
	
	cout << "Your word has " << countVowels << " vowel(s)" << endl;

	return 0;
}