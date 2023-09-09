#include <iostream> 

using namespace std;

int main(){


	cout << "Welcome to the barcode generator program!" << endl;
	cout << "Input a zipcode: "
	int zipcode;
	cin >> zipcode;
	cout << endl;
	
	int length = zipcode.size;
	
	if (length != 7){
		cout << "Please make sure your zipcode is a total of 7 digits."
		return 0;
	}
	
	

	
	
	
	
	return 0;
}