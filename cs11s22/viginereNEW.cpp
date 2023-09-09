//Massimo Ginella
//massimoginella12@gmail.com
//Assignment #6
//CS-11 Introduction to C++
//12/10/22
//vigenere.cpp
//This program takes in a key word, and -d (decrypt) or -e (encrypt) in order to 
//either decrypt or encrypt a message the user inputs depending on the key word

#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;

class Vigenere{

	public:
	string encrypt_message(string, string);
	string decrypt_message(string, string);
	string cap_message(string);
	
	private:
	void simplify(string, string);
	string shift(vector <int>);
	vector <int> message_nums;
	vector <int> key_nums;
	vector <int> combine_nums;
	
};

string Vigenere::encrypt_message(string message_to_enc, string key_phrase){
	

	simplify(message_to_enc, key_phrase);
	int k = 0;
	for (int i = 0; i < message_to_enc.size(); i++){
		if (k == key_phrase.size()){
			k = 0;
		}
		combine_nums.push_back(message_nums[i] + key_nums[k]);
		if (combine_nums[i] >= 26){
			combine_nums[i] = combine_nums[i] % 26;
		}
		k++;
	}
	string encrypted_str = shift(combine_nums);
	return encrypted_str;
}

string Vigenere::decrypt_message(string message_to_dec, string key_phrase){
	
	simplify(message_to_dec, key_phrase);
	int k = 0;
	for (int i = 0; i < message_to_dec.size(); i++){
		if (k == key_phrase.size()){
			k = 0;
		}
		combine_nums.push_back(message_nums[i] - key_nums[k]);
		if (combine_nums[i] < 0){
			combine_nums[i] = 26 - (combine_nums[i] * -1);
		}
		k++;
	}
	string decrypted_str = shift(combine_nums);
	return decrypted_str;
}

void Vigenere::simplify(string word, string key){
	
	for (int i = 0; i < word.size(); i++){
		message_nums.push_back(word[i] - 65);
	}
	for (int i = 0; i < key.size(); i++){
		key_nums.push_back(key[i] - 65);
	}
}

string Vigenere::shift(vector <int> nums_to_conv){
	string shifted_str = "";
	for (int i = 0; i < nums_to_conv.size(); i++){
		shifted_str = shifted_str + (char) (nums_to_conv[i] + 65);
	}
	return shifted_str;
}

string Vigenere::cap_message(string sentence){
	string cap_sentence = "";
	for (int i = 0; i < sentence.size(); i++){
		if (isalpha(sentence[i])){
			cap_sentence = cap_sentence + (char)toupper(sentence[i]);
		}
	}
	return cap_sentence;
}

int main(int info_size, char *info_holder[]){

	if (info_size != 3){
		cout << "USAGE: " << info_holder[0] << " -d|e shiftAmount" << endl;
		exit(1);
	}

	string key_word = info_holder[1];
	string enc_or_dec = info_holder[2];
	bool encrypt = true;
	
	if (enc_or_dec == "-e"){
		encrypt = true;
	} else if (enc_or_dec == "-d"){
		encrypt = false;
	} else {
		cout << "Invalid entry. Enter either -e (encrypt) or -d (decrypt)" << endl;
		exit(1);
	}
	
	string message = "";
	string line = "";
	//Vigenere cipher;
	while (getline(cin, line)){
		message += line;
	}
	if (encrypt){
		Vigenere cipher;
		cout << cipher.encrypt_message(cipher.cap_message(message), cipher.cap_message(key_word)) << endl;
	} else {
		Vigenere cipher;
		cout << cipher.decrypt_message(cipher.cap_message(message), cipher.cap_message(key_word)) << endl;
	}

	return 0;
}
