#include <iostream>
#include <cmath>
	
using namespace std;
	
	
//function stub
double cube_volume(double side){
	//what if prameter value is not as expected?
	if (side < 0.0) return 0.0;
	
	double volume = pow(side, 3);
	
	return volume;
}
	
	
	
int main(){
	
	cout << "Cube Volume Calculator" << endl;
	
	
	cout << "The volume of a cube with length 0 is:  ";
	cout << cube_volume(0.0) << endl;
	
	cout << "The volume of a cube with length 2 is:  ";
	cout << cube_volume(2.0) << endl;
	
	cout << "The volume of a cube with length 5 is:  ";
	cout << cube_volume(5.0) << endl;
	
	cout << "The volume of a cube with length 10 is:  ";
	cout << cube_volume(10.0) << endl;
	
	cout << "The volume of a cube with length -3 is:  ";
	cout << cube_volume(-3.0) << endl;



	return 0;
}