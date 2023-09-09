#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double rectwidth;
	double rectheight;
	
	cout << "What is the width of your rectangle?" << endl;
	cin >> rectwidth;
	cout << "What is the height of your rectangle?" << endl;
	cin >> rectheight;
	
	double perimeter =  2*rectwidth + 2*rectheight;
	double area = rectwidth * rectheight;
	double length = sqrt(pow(rectwidth , 2) + pow(rectheight , 2));
	
	cout << "The perimeter of your rectangle is " << perimeter << endl;
	cout << "The area of your rectangle is " << area << endl;
	cout << "The length of your rectangle is " << length << endl;
	
	return 0;
}