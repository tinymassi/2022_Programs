// cs 11 example program
// cashRegister.cpp

#include <iostream>
#include <vector>

using namespace std;



class CashRegister{
	public:
		CashRegister();
		// void clear();
// 		void add_item(double price);
// 		int get_count();
// 		double get_total();
// 		void display();
	private:
		int _item_counter;
		vector<double> item_price_holder;
};


CashRegister::CashRegister(){
	_item_counter = 0;
}

void CashRegister::clear(){
	item_price_holder.clear();
 }

void CashRegister::add_item(double price){
	item_price_holder.push_back(price);
}


int CashRegister::get_count(){
	return item_price_holder.size();
}

double CashRegister::get_total(){
	double total_price = 0.0;
	for(int i = 0; i < item_price_holder.size(); i++){
		total_price += item_price_holder[i];
	}
	return total_price;
}


void CashRegister::display(){

	for (int i = 0; i < item_price_holder.size(); i++){
		_item_counter++;
		cout << "Item " << _item_counter << ": $" << item_price_holder[i] << endl;
	}
	
	
}


int main(){
//	CashRegister station[10];


	CashRegister cr;
	CashRegister cr2;
	

	
	cr.display();
	cr2.display();
	
	cr.add_item(2.50);
	cr.add_item(2.50);
	cr.add_item(2.50);
	cr.add_item(2.50);
	
	//cr.display();
	cout << "Total Price: $" << cr.get_total() << endl;

	cr2.add_item(0.99);
	cr2.add_item(0.99);
	cr2.add_item(0.99);
	cr2.add_item(0.99);
	cr2.add_item(0.99);
	
	//cr2.display();
	cout << "Total Price: $" << cr2.get_total() << endl;


	return 0;
}
