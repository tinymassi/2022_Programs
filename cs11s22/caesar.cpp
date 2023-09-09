// CS11 Steve Hodges, Cabrillo College
// caesar.cpp

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Caesar{
public:
  Caesar(int shamt); // specify shift amount
  string encrypt(string); // encrypts the given string
  string decrypt(string); // decrypts the given string
  string simplify(string);
private:
  char shift(char, int);
  int shamt; // shift amount variable
};

Caesar::Caesar(int shiftAmount){
  shamt = shiftAmount;
}

// TAKES INPUT SENDS IT TO SHIFT FUNCTION THEN RETURNS THE VARIABLE TO WHICH THAT IS ADDED TO
string Caesar::encrypt(string plaintext){
  string ciphertext="";
  int size = plaintext.size(); 
  for(int i = 0; i < size; i++){
    ciphertext = ciphertext + shift(plaintext[i], shamt); //<-calls function shift
  }													      // ^shift function returns
  return ciphertext; //returns ciphertext to 			  // ^char at that shift # 
}														  // ^and adds it to ciphertext


//TAKES CODED INPUT AND DECRYPTS IT INTO NORMAL WORD
string Caesar::decrypt(string ciphertext){ 
  string plaintext="";
  int size = ciphertext.size();
  for(int i=0; i< size; i++){
    plaintext = plaintext + shift(ciphertext[i], -shamt); //<-goes to shift, but instead of 
  }														  // ^adding shift amt to the message to
  return plaintext;	//<-returns the new string decrypted  // ^encrypt it, it subtracts the shift
}														  // ^amt to decrypt it


//RETURNS COPY OF STRING IN UPPERCASE TO MAIN EMBEDDED IN ENCRYPT FUNCT
string Caesar::simplify(string text){
  string simplified="";
  int size = text.size();
  for(int i=0; i<size; i++){ 
    if (isalpha(text[i])){ //<-checks if the string is alphanumeric at each char
      simplified = simplified + (char) toupper(text[i]); //<-simplified converts the text to a char
    }													 // ^then it makes all chars uppercase to add to simplified variable
  }
  return simplified;
}

//SHIFTS THE SPECIFIED CHARACTER BY A CERTAIN SHIFT AMOUNT AND RETURNS IT IO ENCRYPT OR DECRYPT FUNCT
char Caesar::shift(char c, int shamt){ //receives a character, and a shift amount
	//cout << " char was:" << c << "     with value:" << c -'A' << endl;
	int result = (c-'A'+shamt); //not sure what this does...

	if (result >= 26) result = result - 26; //<-something with ASCII
	if (result < 0) result = result + 26; //<-also something with ASCII
	
	return result+'A'; //returns result of shifted character c by shamt
}



int main(int argc, char *argv[]){

  
    cout << "argc is " << argc << endl;
    for(int i = 0; i< argc; i++){
    cout << i << ": " << argv[i] << endl; //<-outputs based
    }									  // ^on argc number
  			

  if (argc != 3){
    cout << "USAGE: " << argv[0] << " -d|e shiftAmount" << endl; //<-displays if 
    exit(1);													 // ^there is no command 
  }   															 // ^after ./a.out

  
  int shamt = atoi( argv[2] ); //<-takes the number shift amount from user input after ./a.out
  							   // ^changes it from a char to an int
  							   
  bool encrypt; 
  string option( argv[1]); //<-stores the "-e" or "-d" from the user
  string line; //<-input from user
  string encodedLine; //<-new encrypted or decrypted input to be displayed
  
  if (option == "-e"){ //checks if user put "-e" to encrypt word or "-d" to decrypt word
    encrypt = true; //<-encrypt
  }	else {
    encrypt = false; //<-decrypt
  }
  
  Caesar cipher(shamt);
  
  while( getline(cin, line) ){ //entering your word into this while loop
    if (encrypt){ //encrypt = true
      encodedLine = cipher.encrypt(cipher.simplify(line)); //<-sends the input to get encrypted, but the simplify 
    } else { //encrypt = false							   // ^function makes the line capitalized first
      encodedLine = cipher.decrypt(line); //decrypt the message
    }	
    cout << encodedLine << endl; //output result from the function
  }
  
  return 0;
}
