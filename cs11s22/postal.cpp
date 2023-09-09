//MASSIMO GINELLA
//massimoginella12@gmail.com
//the purpose of this program is to take in a zipcode and to output a barcode for said zipcode

#include <iostream> 

using namespace std;

int main(){


	cout << "Welcome to the barcode generator program!" << endl;
	cout << "Input a zipcode: ";
	string zipcode;
	cin >> zipcode;
	
	int zipcode_size = zipcode.size();
	
	int sum_value = 0;

	cout << "|";

	for (int i = 0; i <= zipcode_size; i++){
	
		if (zipcode[i] == '1'){
			cout << ":::||";
			sum_value = sum_value + 1;
		} else if (zipcode[i] == '2'){
			cout << "::|:|";
			sum_value = sum_value + 2;
		} else if (zipcode[i] == '3'){
			cout << "::||:";
			sum_value = sum_value + 3;
		} else if (zipcode[i] == '4'){
			cout << ":|::|";
			sum_value = sum_value + 4;
		} else if (zipcode[i] == '5'){
			cout << ":|:|:";
			sum_value = sum_value + 5;
		} else if (zipcode[i] == '6'){
			cout << ":||::";
			sum_value = sum_value + 6;
		} else if (zipcode[i] == '7'){
			cout << "|:::|";
			sum_value = sum_value + 7;
		} else if (zipcode[i] == '8'){
			cout << "|::|:";
			sum_value = sum_value + 8;
		} else if (zipcode[i] == '9'){
			cout << "|:|::";
			sum_value = sum_value + 9;
		} else if (zipcode[i] == '0'){
			cout << "||:::";
			sum_value = sum_value + 0;
		}
	
	}

	
	
	if (sum_value % 10 != 0){
	
		if ((sum_value + 1) % 10 == 0){
			cout << ":::||";
		} else if ((sum_value + 2) % 10 == 0){
			cout << "::|:|";
		} else if ((sum_value + 3) % 10 == 0){
			cout << "::||:";
		} else if ((sum_value + 4) % 10 == 0){
			cout << ":|::|";
		} else if ((sum_value + 5) % 10 == 0){
			cout << ":|:|:";
		} else if ((sum_value + 6) % 10 == 0){
			cout << ":||::";
		} else if ((sum_value + 7) % 10 == 0){
			cout << "|:::|";
		} else if ((sum_value + 8) % 10 == 0){
			cout << "|::|:";
		} else if ((sum_value + 9) % 10 == 0){
			cout << "|:|::";
		}
	} else{
		cout << "||:::";
	}

	cout << "|" << endl;
	
	
	
	
	return 0;
}