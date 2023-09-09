#include <iostream>

using namespace std;

int main()
{
	double total_book_price = 0;
	int number_of_books = 0;
	double tax = 0;
	double shipping = 0;
	double total_price = 0;


	cout << "Welcome to the WeHateAmazon Bookstore!" << endl
		 << "Please enter the price of your book/s. $";
	cin >> total_book_price;
	cout << "Please enter the number of books you are purchasing." << endl;
	cin >> number_of_books;
	
	
	tax = total_book_price * .085;
	shipping = 2 * number_of_books;
	total_price = shipping + total_book_price + tax; 
	
	cout << "Tax: $" << tax << endl
		 << "Shipping cost: $" << shipping << endl
	 	 << "The total price of your order is $" << total_price << endl
	 	 << "Thank you for shopping with WeHateAmazon.com!" << endl;
	

	return 0;
}