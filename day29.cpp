//do-while loop in c++

#include <iostream>
using namespace std;

int main(){
	int number;
	do{
		cout << "Enter a positive number: " << endl;
		cin >> number;
	}while(number < 0);
		
	cout << "The lucky number is: " << number << endl;

return 0;
}
