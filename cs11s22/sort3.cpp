//MASSIMO GINELLA
//NUMBER SORT PROGRAM

#include <iostream>

using namespace std;

//this way is hella dumb
int sort(int &a, int &b, int &c){

	if (a > b && b > c){
		cout << c << " " << b << " " << a << endl;
	} else if (a > c && c > b){
		cout << b << " " << c << " " << a << endl;
	} else if (b > a && a > c){
		cout << c << " " << a << " " << b << endl;
	} else if (b > c && c > a){
		cout << a << " " << c << " " << b << endl;
	} else if (c > b && b > a){
		cout << a << " " << b << " " << c << endl;
	} else if (c > a && a >b){
		cout << b << " " << a << " " << c << endl;
	}
	
	return 0;
}

int main(){

	cout << "Enter number a: ";
	int a;
	cin >> a;
	
	cout << "Enter number b: ";
	int b;
	cin >> b;
	
	cout << "Enter number c: ";
	int c;
	cin >> c;
	
	cout << "sort" << endl;
	
	sort (a, b, c);
	



}