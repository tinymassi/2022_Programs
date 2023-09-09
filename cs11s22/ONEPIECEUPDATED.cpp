#include <iostream>
#include <string>

using namespace std;

int main(){

	string Answer_Balls;
	string answer2;
	
	cout << "Is the one piece real? ";
	cin >> Answer_Balls;
	
	if (Answer_Balls == "Yes"){
		cout << "THE ONE PIECEEEE, THE ONE PIECE IS REALLLLLL! Can we get much higher? so highhhh... woah woah woah" << endl;
	} else if (Answer_Balls == "No"){	
		cout << "Are you sure? ";
		cin >> answer2;
			if (answer2 == "No"){
				cout << "Thats what I thought. THE ONE PIECE, THE ONE PIECE IS REALLLL!" << endl;
			} else if (answer2 == "Yes"){
				cout << "Shut yo ugly ass up. The one piece IS real." << endl;
			}
	}

	return 0;
}