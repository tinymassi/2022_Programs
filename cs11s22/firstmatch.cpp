#include <iostream>


using namespace std;


int main(){

	string line;
	//int spaces = 0;
	
	cout << "The first matching program!" << endl;
	cout << "Enter a line of text:" << endl;
	
	getline(cin, line); // 
	
	//int size = line.size();
	
	//use a loop to search through string
	
	// for (int i=0; i < size; i++){
// 		if (line[i] == ' '){
// 			spaces++;
// 			cout << "Space at " << i << endl;
// 		}
// 	
// 	}
// 	
// 	cout << spaces << "Spaces in total." << endl;




// 	int index = 0; //same thing as like int i but for a while loop
// 	bool found = false;
// 	
// 	while(!found && index < size){
// 		if (line[index] == ' '){
// 			found = true;
// 			cout << "first space at " << index << endl;
// 		}
// 		index++;
// 	}
// 
// 	if (!found){
// 		cout << "no spaces found." << endl;
// 	}




	int value; // the input value
	bool valid = false; // has the user entered a valid entry yet?
	
	while(!valid){
		cout << "Enter a positive value less than 100 :";
		cin >> value;
		if (value > 0 && value < 100){
			valid = true;
		} else {
			cout << "Invalid input -- try again." << endl;
		}
	
	}
	
	
	
	
	cout << "Your choice: " << value << endl;
	
	return 0;
}