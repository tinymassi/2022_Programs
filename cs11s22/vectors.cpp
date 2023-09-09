#include <iostream>
#include <vector>

using namespace std;

void //unfinished


void multiply_vector(vector<int> &v, int factor){
	for(int i = 0; i < v.size(); i++){
		v[i] *= factor;
	}
}

int sum_vector(vector<int> v){
	int sum = 0;
	for (int i = 0; i < v.size(); i++){
		sum += v[i];
	}
	return sum;
}

int max_vector(vector<int> v){
	if (v.size() == 0){
		cerr << "warning: vector in max_vector is empty (-1)" << endl;
		return -1;
	}
	
	int max = v[0];
	for(int i = 1; i < v.size(); i++){
		if (v[i] > max){
			max = v[i]
		}
	}
	return max;
}

int main(){

	PROGRAM NUMBER 1 + 2
	//int temp;
	int size;
	int index;

	vector<int> myVector;
	cout << myVector.size() << " or " << myVector.capacity() << endl;
	
	cout << "How many elements to store in a vector? ";
	cin >> size;
	
	for (int i = 0; i < size; i++){
	
		myVector.push_back(i);
	
	}
	
	cout << myVector.size() << " of " << myVector.capacity() << endl;
	
	cout << "index to access? ";
	cin >> index;
	
	if (index >= 0 && index <= myVector.size()){
	
		cout << myVector[index] << endl;

	}
	
	cout << myVector.at(index) << endl;
	
	// while (cin >> temp){
// 		
// 		myVector.push_back(temp);
// 		
// 		cout << myVector.size() << " of " << myVector.capacity() << endl;
// 	
// 	}

	// //PROGRAM NUMBER 3	
// 	const int SIZE = 5;
// 	int data[SIZE] = {2, 4, 6, 8, 100};
// 	
// 	vector<int> v;
// 	 
// 	for (int i = 0; i < SIZE; i++){
// 		v.push_back( data[i] );
// 	}
// 	
// 	cout << "[";
// 	
// 	for (int i = 0; i < v.size(); i++){
// 	
// 		cout << v[i] << " ";
// 	
// 	}
// 
// 	cout << "]" << endl;
// 	
	
	// const int SIZE = 5;
// 	int data[SIZE] = {2, 4, 6, 8, 100};
// 	
// 	vector<int> v;
// 	
// 	for (int i = 0; i < SIZE, i++){
// 		v.push_back( data[i] );
// 	}
// 	
// 	print_vector(v);
// 	
// 	multiply_vector(v, 3);
// 
// 	int sum = sum_vector(v);
// 	
// 	cout << "sum is " << sum << endl;
// 	
// 	vector<int> v2;
// 	
// 	int max = max_vector(v2);
// 	
// 	cout << "maximum value is " << max << endl;
// 	
	
	
	return 0;
}	
