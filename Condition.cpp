#include <iostream>
using namespace std;
int main(){
	
	//Playing with condition
	
	int number_one = 1;
	int number_two = 20;
	
	if(number_one >= number_two){
		cout << "Number one is equal or more than Number two";
	}
	else{
		cout << "Number one is lesser than Number two";
	}
	
	cout << "------------------------------- \n";
	cout << "Now input two number to compare" << endl;
	
	
	cin >> number_one;
	cin >> number_two;
	
	if(number_one >= number_two){
		cout << "Number one is equal or more than Number two";
	}
	else{
		cout << "Number one is lesser than Number two";
	}
	
	
	
	return 0;
	
}
