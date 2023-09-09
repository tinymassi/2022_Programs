#include <iostream>
using namespace std;


class TallyCounter{
	public:
		TallyCounter();
		void increment();
		int getCount();
		void reset();
		
	private:
		int _count;
};

TallyCounter::TallyCounter(){
	_count = 0;
}

void TallyCounter::increment(){
	string input;
	while (cin >> input){
		if (input == "+"){
			_count++;
		}
	}

	if(_count == 10000) _count = 0;
}

int TallyCounter::getCount(){
	return _count;
}

void TallyCounter::reset(){
	_count = 0;
}


int main (){
	TallyCounter tc;
	tc.increment();
	
	
	cout << tc.getCount() << endl;

	return 0;
}

