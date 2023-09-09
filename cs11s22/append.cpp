#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
	

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " "; //prints out values of v (result) out to the terminal one by one
	}
	cout << endl;

}

vector<int> append(vector<int> a, vector<int> b){
	vector<int> result;

	for(int i = 0; i < a.size(); i++){
		result.push_back( a[i] ); //putting the values of vector a in vector result
	}
	for(int i = 0; i < b.size(); i++){
		result.push_back( b[i] ); //putting the values of vector b in vector result 
	}


	return result;
}


int main(){

	vector<int> v;
	vector<int> u;
	
	u.push_back(2);
	u.push_back(4);
	u.push_back(6);
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	
	vector<int> result = append(u, v);
	
	cout << "result ";
	print_vector(result);
	
	cout << "u ";
	print_vector(u);
	
	cout << "v ";
	print_vector(v);
	
	return 0;
}
