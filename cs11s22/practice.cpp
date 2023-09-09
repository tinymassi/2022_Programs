#include <iostream> 
#include <vector>
#include <cctype>

using namespace std;

class Practice{
	public:
	Practice();
	void capitalize(vector <string> old_word);
	
	private:
	vector <string> even_string_storage;
	vector <string> odd_string_storage;


};

Practice::Practice(){
	vector <string> even_string_storage;
	vector <string> odd_string_storage;
}


void Practice::capitalize(vector <string> old_word){


	for (int i = 0; i < old_word.size(); i++){
		if (old_word[i].size() % 2 == 0){
			even_string_storage.push_back(old_word[i]);
		} else {
			odd_string_storage.push_back(old_word[i]);
		}
	}
	if (odd_string_storage.size() > even_string_storage.size()){
		for (int i = 0; i < odd_string_storage.size(); i++){
			cout << i + 1 << ": " << odd_string_storage[i] << endl;
		}
	} else {
	 	for (int i = 0; i < even_string_storage.size(); i++){
			cout << i + 1 << ": " << even_string_storage[i] << endl;
		}
	}
	
}



int main(){
	
	Practice test;
	string words;
	vector <string> words_holder;

	while (getline(cin, words)){
		words_holder.push_back(words);
	}
	
	test.capitalize(words_holder);
	
	Practice test2;
	string words2;
	vector <string> words_holder2;
	
	while (getline(cin, words2)){
		words_holder2.push_back(words2);
	}
	
	test2.capitalize(words_holder);
	

	return 0;
}