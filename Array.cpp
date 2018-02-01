#include <iostream>
using namespace std;

int main(){
	//Array variable
	int set_number[] = {1, 2, 3, 4};
	
	size_t size_arr; //Define array's size
	
	
	size_arr = sizeof(set_number) / sizeof(set_number[0]); //Real size of array
	
	cout << "This is array size " << size_arr << endl; // Total members in array
	cout << "This is actual : " << sizeof(set_number) << endl; // It's bit or byte of this array??
	
	cout << "Try input in 0 index" << endl;
	cin >> set_number[0];
	cout << "This is index 0 : " << set_number[0] << endl;
	cout << "Index 0 is above" << endl;
	
	//Run loop by size of array
	for(int index = 0; index < size_arr; index++){
		cout << "This is index at : " << index << endl;
	}
	
	return 0;
	
}
