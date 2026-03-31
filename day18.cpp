//useful math related function
//just search up the documentation for more
//some useful other function include the round(), abs(), ciel()

#include <iostream>
#include <cmath>				//It provides mathematical functions for floating-point calculations. 

using namespace std;

int main (){
	double x = 4;
	double y = 2;
	double maxi,mini,power;
	double sqroot;

	maxi = max(x, y);			//gives the maximum of the two numbers
	cout << "The maximum of x and y is: " << maxi << endl;

	mini = min(x, y);			//gives the minimum of the two number
	cout << "The minimum of x and y is: " << mini << endl;

	power = pow(x, y);			//gives the value of x raise to the power y
	cout << "The value of x^y is: " << power <<endl;

	sqroot = sqrt(x);			//gives the square root of the value
	cout << "The square root of the number is: " << sqroot << endl;



return 0;
}

