#include <iostream> 

using namespace std;

int main(){


	cout << "Welcome to the barcode generator program!" << endl;
	cout << "Input a zipcode: ";
	string zipcode;
	cin >> zipcode;
	
	int zipcode_size = zipcode.size();
	
	int sum_value = 0;
	
	for (int i = 0; i <= zipcode_size; i++){
	
		if (zipcode[i] == '1'){
			cout << ":::|| (1)";
			sum_value = sum_value + 1;
		} else if (zipcode[i] == '2'){
			cout << "::|:| (2)";
			sum_value = sum_value + 2;
		} else if (zipcode[i] == '3'){
			cout << "::||: (3)";
			sum_value = sum_value + 3;
		} else if (zipcode[i] == '4'){
			cout << ":|::| (4)";
			sum_value = sum_value + 4;
		} else if (zipcode[i] == '5'){
			cout << ":|:|: (5)";
			sum_value = sum_value + 5;
		} else if (zipcode[i] == '6'){
			cout << ":||:: (6)";
			sum_value = sum_value + 6;
		} else if (zipcode[i] == '7'){
			cout << "|:::| (7)";
			sum_value = sum_value + 7;
		} else if (zipcode[i] == '8'){
			cout << "|::|: (8)";
			sum_value = sum_value + 8;
		} else if (zipcode[i] == '9'){
			cout << "|:|:: (9)";
			sum_value = sum_value + 9;
		} else if (zipcode[i] == '0'){
			cout << "||::: (0)";
			sum_value = sum_value + 0;
		}
	
	}
	
	
	if (sum_value % 10 != 0){
	
		if ((sum_value + 1) % 10 == 0){
			cout << ":::|| (1)" << endl;
		} else if ((sum_value + 2) % 10 == 0){
			cout << "::|:| (2)" << endl;
		} else if ((sum_value + 3) % 10 == 0){
			cout << "::||: (3)" << endl;
		} else if ((sum_value + 4) % 10 == 0){
			cout << ":|::| (4)" << endl;
		} else if ((sum_value + 5) % 10 == 0){
			cout << ":|:|: (5)" << endl;
		} else if ((sum_value + 6) % 10 == 0){
			cout << ":||:: (6)" << endl;
		} else if ((sum_value + 7) % 10 == 0){
			cout << "|:::| (7)" << endl;
		} else if ((sum_value + 8) % 10 == 0){
			cout << "|::|: (8)" << endl;
		} else if ((sum_value + 9) % 10 == 0){
			cout << "|:|:: (9)" << endl;
		}
	}
	cout << sum_value << endl;
	
	
	
	return 0;
}