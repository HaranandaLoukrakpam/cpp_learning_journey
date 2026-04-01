//To calculate the hupotenuse of a right triangle
//a^2 + b^2 = c^2

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a;
	double a1;
	double b;
	double b1;
	double c;
	double c1;

	cout << "======== Hypotenuse calculator ========" << endl;
	cout << "Enter the lenght of one side of a triangle: " << endl;
	cin >> a;

	cout << "Enter the second side of the triangle: " << endl;
	cin >> b;

	a1 = pow(a, 2);
	b1 = pow(b, 2);

	c = a1 + b1;
	c1 = sqrt(c);

	cout << "The hypotenuse of your triangle is: " << c1 <<endl;

return 0;
}
