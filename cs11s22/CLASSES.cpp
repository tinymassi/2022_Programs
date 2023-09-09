#include <iostream>

using namespace std;


class CashRegister{
	public:
		CashRegister(); //CONSTRUCTOR FUNCTION
		void clear();
		void add_item(double price);
		double get_total();
		int get_count();
		void display();
	private:
		int _item_count; 	 // starting member variables traditionally started
		double _total_price; // with an underscore to stop confusion between 
							 // variables and member variables
};


// CONSTRUCTOR: so we can declare our class member variables!
CashRegister::CashRegister(){
	_item_count = 0;
	_total_price = 0.0;
}


// the "::" is the "scope resolution operator"
// showing that the function "clear" belongs to the CashRegister class
void CashRegister::clear(){
	_item_count = 0;
	_total_price = 0.0;
}

void CashRegister::add_item(double price){
	_total_price += price;
	_item_count += 1;
	
}

// get -- get function
double CashRegister::get_total(){
	return _total_price;
}

int CashRegister::get_count(){
	return  _item_count;
}

void CashRegister::display(){
	cout << _item_count << " item(s)" << endl;
	cout << " total: $" << _total_price << endl;
}


int main(){
	CashRegister cr;
	CashRegister cr2;
	
	
	// dot (.) is the member access operator 
	// this allows you to access a public member
	//cr.clear();
	//cr2.clear();

	//cout << cr.get_total() << endl;  // we put "cr" at the front so that the 
	//cout << cr2.get_total() << endl; // computer knows what function to take 
									   // information from


	cr.add_item(2.50);
	cr.add_item(2.50);
	cr.add_item(2.50);
	cr.add_item(2.50);
	
	cr2.add_item(0.99);
	cr2.add_item(0.99);
	cr2.add_item(0.99);
	cr2.add_item(0.99);
	
	cr.display();
	cr2.display();

	return 0;
}