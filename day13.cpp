//constant in c++
//
#include <iostream>
using namespace std;

int main(){
	const double PI = 3.14159;						//change the variable to a constant so that if someone tries to assigned it value later it won't affect the constant assign value
	double radius = 12.5;
	double circumference = 2*PI*radius;

	cout << "Circumference of the circle is: " << circumference << endl;

	return 0;
}
