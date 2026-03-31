//Arithmetic operators in C++
//idk I'm just bores so I'm going to write a fcking as long code
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

	//initialising the variable for the calculation
	
	float a;
	float b;
	float sum;
	float difference1;
	float difference2;
	float product;
	float division1;					//tough one since I haven't learn the if else syntax for C++
	float power1;
	float power2;

	cout << "==== The  only binary calculator you need====" << endl;
	cout << "---------------------------------------" << endl;

	//taking the input 
	cout << "Please enter the first number in your calculation[Dividend]: " << endl;
	cin >> a;

	cout << "Please enter the second number in your calculation[Divisor]: " << endl;
	cin >> b;

	//calculation part
	
	sum = a + b;
	difference1 = a-b;
	difference2 = b-a;
	product = a*b;

if (b==0){
	cout << "Invalid operand, Division by 0 is not possible." << endl;
}else{
	division1 = a/b;
	};

	power1 = pow(a,b);
	power2 = pow(b,a);
	cout << "---------------------------------------" << endl;
	cout << "The sum of the two number is: " << sum << endl;
	cout << "The difference 1 a-b of the two number is: " << difference1 << endl;
	cout << "The difference 2 b-a of the two number is: " << difference2 << endl;
	cout << "The product a*b of the two number is: " << product << endl;
	cout << "The division a/b of the two number is: " << division1 << endl;
	cout << "The power 1 a**b of the two number is: " << power1 << endl;
	cout << "The power 2 b**a of the two number is: " << power2 << endl;

	return 0;

}


	



