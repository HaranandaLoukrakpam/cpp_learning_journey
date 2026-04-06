//logical operators in cpp
/*	&& = checks if two condition are true
 *	|| = checks if atleast one of the condition are true
 *	!  = reverses the logical state of the operand
 */

#include <iostream>

int main(){
	int temp;
	int fruit;
//and logical operator
	std::cout << "Enter the temperature: " << std::endl;
	std::cin >> temp;

	if(temp > 20 && temp <33 ){
		std::cout << "Temperature is good." << std::endl;
	}else{
		std::cout << "Temperature is bad." << std::endl;
	}
//or logical operator
	std::cout << "Enter the quantity of fruit: : " << std::endl;
	std::cin >> fruit;

	if(fruit >+10 || fruit <= 25){
		std::cout << "Perfect quantity of fruit" << std::endl;
	}else{
		std::cout << "Wrong quantity of fruit" << std::endl;
	}


return 0;
}
