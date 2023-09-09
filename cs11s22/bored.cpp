#include <iostream>

using namespace std;

int main(){

	int response = 0;
	int chowder_response = 0;
	

	cout << "Do you like chowder? Yes (1) or No (2)" << endl;
	cin >> response; 
	
	if (response == 1){
		cout << "What kind of chowder? Clam (1) or Corn (2)?" << endl;
		cin >> chowder_response;
			if (chowder_response == 1){
				cout << "Fuck you." << endl;
			} else if (chowder_response == 2){
				cout << "Good choice. Eat fish bad." << endl;
			}
	} else if (response == 2){
		cout << "Its ok to not like chowder." << endl;
	}
	
	

	return 0;
}