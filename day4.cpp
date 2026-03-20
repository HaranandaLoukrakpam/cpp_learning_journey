//Statement and Function in Cpp
/* A statement is a basic unit of computation in a C++ program
	Every cpp program is a collection of statements organised in a certain way to achieve the same goal
	Statement ends with a semicolon in C++ ;
	

int Addnumbers(int first_number, int second_number){
	int sum = first_number + second_number;
	return sum;
}

int main(int argc,char **argv){
	int firstnumber = 12;
	int secondnumber = 9;

	int sum	= firstnumber + secondnumber;

	sum = Addnumbers(firstnumber, secondnumber);

	sum = Addnumbers(34, 7);

	std::cout << "The sum of the two numbers is: " << sum << std::endl;
	std::cout << "The sum pf the two numbers is: " << Addnumbers(23,8) << std::endl;

	return 0;
}
*/

#include <iostream>
using namespace std;

int product(int firstparameter, int secondparameter){										//defining a function with 2 parameter
	int result = firstparameter * secondparameter;
	return result;																			//returning the defined function
}

int main(){
	int num1 = 12;
	int num2 = 8;

	int sum = num1 + num2;

	cout << "The first number is: " << num1 << endl;
	cout << "The second number is: " << num2 << endl;

	cout << "The sum of the two number is: " << sum << endl;

	int Product_of_two_numbers = product(num1, num2);											// calling the function and giving the two parameter input
	cout << "The product of the two number is: " <<  Product_of_two_numbers << endl;


	return 0;
}
