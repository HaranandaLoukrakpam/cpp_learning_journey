//Assignments in C++

#include <iostream>
using namespace std;

int main(){

	int var1{123};				//Declare and initialise
	cout << "var1: " << var1 << endl;

	var1 = 55;				//Assign
	cout << "var1: " << var1 <<endl;

	cout << endl;
	
	cout <<"----------------------------"<< endl;

	double var2{44.5};				//Declare and initialise
	cout << "var2: " << var2 << endl;

        var2 = 99.9;				//Assign
	cout << "var2: " << var2 <<endl;

	cout << endl;

	cout <<"----------------------------"<< endl;

	bool state{false};				//Declare and initialise
	cout << boolalpha;
	cout << "state: " << state << endl;
	var2 = true;				//Assign
	cout << "state: " << state <<endl;


	cout <<"----------------------------"<< endl;
	
	//Auto-type deduction
	//careful about auto assignments
	
	auto var3{333u};			//declare and intitalise with deduction type
	var3 = -33;

	cout << "var3: " << var3 << endl;

	return 0;
}
