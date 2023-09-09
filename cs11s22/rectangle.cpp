#include <iostream>
using namespace std;

class Rectangle{
	public:
		Rectangle();
		void get_parameter(double _width, double _height, double factor);
		void get_area(double _width, double _height, double factor);
		void resize();
		
	private:
		double _area;
		double _parameter;
};

Rectangle::Rectangle(){
	_area = 0.0;
	_parameter = 0.0;
}

void Rectangle::get_area(double _width, double _height, double factor){
	_area += (_width * factor) * (_height * factor);
}

void Rectangle::get_parameter(double _width, double _height, double factor){
	_parameter += 2 * (_width * factor) + 2 * (_height * factor);
}

void Rectangle::resize(){
	cout << "Area Resize: " << _area << endl;
	cout << "Parameter Resize: " << _parameter << endl;
}

int main(){

	Rectangle wh;
	
	wh.get_area(5.0, 5.0, 2.0);
	wh.get_parameter(5.0, 5.0, 2.0);
	
	wh.resize();

	return 0;
}
