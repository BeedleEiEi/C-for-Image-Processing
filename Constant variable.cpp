#include <iostream>
using namespace std;
#define VELOCITY 25
#define PI 3.14159
#define NAME "Mateo"

int main(){
	//Two type constant as const
	const int SPEED_CAR = 120;
	const float GRAVITY = 9.8;
	
	cout << "Constant Speed : " << SPEED_CAR << endl;
	cout << "Constant Gravity : " << GRAVITY << endl;
	
	cout << "-------------------" << endl;
	
	//Define
	cout << "#Define is : " << endl;
	cout << VELOCITY << endl;
	cout << PI << endl;
	cout << "This is : " << NAME << endl;
	
	return 0;
	
	
}
