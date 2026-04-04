//ternary operator in C++
//ternary operator ?: replace to if/else statement
//conditon ? expression1 : expression2;

#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter your age: " << endl;
	cin >> num;

	num >= 18 ? cout << "Valid age" : cout << "Invalid age" ;


return 0;
}
