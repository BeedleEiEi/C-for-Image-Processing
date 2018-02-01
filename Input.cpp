#include <iostream>
using namespace std;

int main(){
	int number = 12;
	string str = "abc";
	
	/*
	Get input use |cin >> variable|
	Output |use << variable|
	*/
	
	cout << "Test Get input from keyboard" << endl;
	//--------------------------------------
	
	//cout << "Please input number : ";
	//cin >> number; //Get number from user
	
	
	cout << "Please input string : ";
	getline(cin, str); //Get string from user by getline
	
	
	//cout << "Number input : " << number << endl;
	cout << "String input : " << str << endl;
		
	
	return 0;
}
