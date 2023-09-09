#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "Enter your first, middle, and last name: " << endl;
   string first;
   string middle;
   string last;
   cin >> first >> middle >> last;
   string mix = first.substr(0, 1) + middle.substr(0, 1) + last.substr(0, 1);

   cout << "Your initials are: " << mix << endl;
   return 0;
}