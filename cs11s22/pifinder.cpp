#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
	
	srand(time(0));
	
	int tries = 0;
	int hits = 0;
	
	cout << "Monte Carlo Methods: random numbers to derive pi" << endl;
	cout << "Tries?" << endl;
	cin >> tries;
	
	for(int i=0; i < tries; i++){
		double r = (srand(0) * 1.0)/ RAND_MAX; // random number between 0.0 and 1.0
		double x = r * 2.0 - 1.0; //-1.0 and 0.0
		r = (rand() * 1.0) / RAND_MAX; // 		
		double y = r * 2.0 - 1.0; //-1.0 and 0.0
		
		if (x * x + y * y <=1.0) { hits++; }
	
	}
	double pi_estimate = (4.0 * hits)/tries;
	cout << "Estimate of pi is " << pi_estimate << endl;
	
	return 0;
}