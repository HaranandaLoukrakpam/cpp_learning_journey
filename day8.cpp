//Variables and Data-Types in C++
/* int,double and float are used to represent numbers
	double and float are used to represent fractional number

char are used to represent characters in memory 
bool represents true and false
void represents emptiness mainly used in function

auto is a keyword used to deduce other data-type in C++

Number System in C++:
	
	Decimal system/ base-10:
		0 1 2 3 4 5 6 7 8 9
			
			eg: 2731 = 2x10^3 + 7x10^2 + 3x10^1 + 1x10^0
	Binary number system/ base-2:
		0 and 1
			
			eg: 10010 = 1x2^4 + 0x2^3 + 0x2^2 + 1x2^1 + 0x2^0
	Hexadecimal number system
		0 1 2 3 4 5 6 7 8 9 A B C D E F 	
	Octal/ base-8:
		0 1 2 3 4 5 6 7
Padding:
	filling up missing or empty values with 0 during conversion

Variable:
	 A variable is a name piece of memory used to store specific types of data

Size of a variable
	to know the size of a variable in cpp use sizeof(variablename)

Variable based initialization
Functional variable initialisation
Assignment initialization

Implicit conversion
	the compiler chops of the decimal points or extra value to or insert certain value to be able to use it as a specified data-types

int datatypes:
	use to store decimal
	takes up 4 bytes

*/
#include <iostream>
using namespace std;

int main(){

	int num1 = 15;						//Decimal
	int num2 = 017;						//octal >> if we type 0 before a number C++ would interpret it aa octal
	int num3 = 0x0F;					//hexadecimal
	int num4 = 0b00001111;				//binary >> to initiate a number a binary we type 0b brfore the number

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "num3: " << num3 << endl;
	cout << "num4: " << num4 << endl;

	//braced initialiser
	//variable may contain random garbage value . WARNING

	int elephant_count;
	int lion_count{};					//initialises to 0
	int dog_count{10};
	int cat_count{15};

	int domesticated_animal {dog_count + cat_count};					//can use expression as initializers

	cout << "Elephant count: " << elephant_count <<endl;
	cout << "Lion count: " << lion_count <<endl;
	cout << "Dog count: " << dog_count <<endl;
	cout << "Cat count: " << cat_count <<endl;
	cout << "Domesticated animal count: " << domesticated_animal << endl;

	//functional initialisation

	int apple(5);
	int orange(10);

	int fruits(apple + orange);

	//int bad initialisation (doesn't_exist3 + doesn't_exist4);
	//information lost less safe than braced initializer
	
	int narrowing_conversion_functional(2.9);

	cout<< "Apple count: " << apple << endl;
	cout<< "Orange count: " << orange << endl;
	cout<< "Fruits count: " << fruits << endl;
	cout<< "Narrowing  conversion: " << narrowing_conversion_functional << endl;

	//Assignment notation

	int bike = 10;
	int car = 50;

	int vehicle = car + bike;

	int narrowconvo = 2.9;

	cout<< "bike count: " << bike << endl;
	cout<< "car count: " << car << endl;
	cout<< "vehicle count: " << vehicle << endl;
	cout<< "Narrow count: " << narrowconvo << endl;

//check the size of variable

cout << "size of int: " << sizeof(int) << endl;
cout << "size of car: " << sizeof(car) << endl;

return 0;
}

