#include <iostream> 
#include <cmath>

using namespace std;

double volume_calculator(double length1, double height1){

	double volume = 0.0;
	double base_area = pow(length1, 2);
	
	volume = (base_area * height1)/3;
	
	return volume;
}



int main(){


	cout << "Pyramid Volume Calculator" << endl;
	
	cout << "Enter base length of pyramid" << endl;
	double base_length = 0.0;
	cin >> base_length;
	
	cout << "Enter height of pyramid" << endl;
	double height = 0.0;
	cin >> height;
	
	cout << "The volume of your pyramid is " << volume_calculator(base_length, height) << endl;
	
	
	return 0;
}