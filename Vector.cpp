#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	//Vector assign |(Size, value)|
	vector<int> vec;
	vector<int> vec_sec;
	vector<int> vec_thr;
	vec.assign(1, 2);
	
	//Vector index start at 0 but assign at 1 is size
	cout << "Test vector index 0 is : " << vec[0] << endl;
	cout << "Test vector index 1 is : " << vec[1] << endl;
	cout << "Size of vector is : " << (int) vec.size() << endl;
	
	cout << "New assigned \n";
	vec.assign(1, 5);
	vec.assign(4, 6); //Replace size of vector to 3
	
	//first 4 index will be 6 following assigned vector
	//Why ?? because we not yet assign values to other index
	cout << "Vector index 0 is : " << vec[0] << endl; //Return 6
	cout << "Vector index 1 is : " << vec[1] << endl; //Return 6 too
	cout << "Vector index 2 is : " << vec[2] << endl; //Return 6 again
	cout << "Vector index 3 is : " << vec[3] << endl; //Return 6 at last
	cout << "Vector index 4 is : " << vec[4] << endl; //Return 0 because there is no assigned value
	cout << "Size of vector is : " << (int) vec.size() << endl; //It's returned 3 is size
	
	//Assign values to other index
	vec[0] = 10;
	vec[1] = 11;
	vec[2] = 12;
	vec[3] = 13;
	vec[4] = 14;
	vec[5] = 15;
	//Add over size still work!
	vec[6] = 16;
	vec[7] = 17;
	
	cout << vec[0] << endl;
	cout << vec[1] << endl;
	cout << vec[2] << endl;
	cout << vec[3] << endl;
	
	//Over size
	cout << vec[4] << endl;
	cout << vec[5] << endl;
	cout << vec[6] << endl;
	cout << vec[7] << endl;
	//Test function
	vector<int> first;
	first.assign(7, 50);
	
	vector<int>::iterator it;
	it = first.begin()+3; //0,1,2,3 << cut off space will be 4; >> |4,5,6,7|
	
	vector<int> second;
	second.assign(it, first.end()); //.end() is last index
	
	
	
	
	cout << "Function begin() return : " << second.size();
	
	
	return 0;
}
