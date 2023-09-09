#include <iostream>
#include <string>

using namespace std;

int main(){

	string answer;
	string answer2;
	
	cout << "Is the one piece real? ";
	cin >> answer;
	
	if (answer == "Yes" && answer == "yes"){
		cout << "THE ONE PIECEEEE, THE ONE PIECE IS REALLLLLL! Can we get much higher? so highhhh... woah woah woah" << endl;
	} else if (answer == "No" && answer == "no"){	
		cout << "Are you sure? ";
		cin >> answer2;
			if (answer2 == "No" && answer == "no"){
				cout << "Thats what I thought. THE ONE PIECE, THE ONE PIECE IS REALLLL!" << endl;
			} else if (answer == "Yes"){
				cout << "Shut yo ugly ass up. The one piece IS real." << endl;
			}
	}

	return 0;
}