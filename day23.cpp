// calculator using switches

#include <iostream>
using namespace std;

int main(){
	double x;
	double y;
	char sign;

	cout << "Enter the first operator: " << endl;
	cin >> x;

	cout << "Enter the second operator: " << endl;
	cin >> y;
	
	cout << "Enter the operand [+,-,*,/]: " <<endl;
	cin >> sign;

	switch(sign){
		case '+':
			cout << "The sum of the two number is" << x+y << endl;
			break;
		case '-':
			cout << "The difference of the two number is: " << x-y << endl;
			break;
		case '*':
			cout << "The product of the two number is: " << x*y << endl;
			break;
		case '/':
			if (y != 0){
				cout << "The division of the two number is: " << x/y << endl;
			}else{
				cout << "division by 0 is not possible" << endl;
			}
			break;
		default:
			cout << "enter the valid operator" << endl;
			break;
	}
return 0;
}
