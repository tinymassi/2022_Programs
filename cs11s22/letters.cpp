#include <iostream>


using namespace std;


int main(){

	//write a program that reads a word and prints each character
	//of the word on a separate line
	
	string word;
	
	cout << "Letter Printer" << endl;
	cout << "Enter a word: ";
	cin >> word;
	
	int size = word.size();
	cout << "Size = " << size << endl;
	
	for(int i=0; i < size; i++){
		//cout << i << endl;
		cout << word[i] << endl;
	}
	

	return 0;
}