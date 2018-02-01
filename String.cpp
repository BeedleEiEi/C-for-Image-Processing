#include <iostream>
using namespace std;

int main(){
	
	string name = "Ice";
	string quote;
	
	cout <<  "My nickname is : " << name << endl;
	cout << "Insert string line" << endl;
	
	getline(cin, quote); //Now it's out all line
	
	cout << "All line is : " << quote;
	
	return 0;
}
