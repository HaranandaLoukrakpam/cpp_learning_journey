//Integer modifiers in C++
/*How to store positive and negative number in C++
	int value1 {12};
	int value2 {-34);		this is how to assigned a negative number to a variable in cpp

	signed by default modifier

	unsigned modifier

int still occupy 4 bytes if they are signed or unsigned

Flagging an integer type as:
	short & long

Modifiers of these types works only with integer data-types,those in which we can store decimal or whole number

	*/

#include <iostream>
using namespace std;

int main(){

//short integer types, 2 bytes

	short short_var {-32768} ; // 2 Bytes
	short int short_int {455} ; //
	signed short signed_short {122}; //
	signed short int signed_short_int {-456}; //
	unsigned short int unsigned_short_int {456};
	cout << "---------------------------------" << endl;
//integer type,4 bytes

	int int_var {55} ; // 4 bytes
	signed signed_var {66};//
	signed int signed_int {77};//
	unsigned int unsigned_int {77};
	cout << "---------------------------------" << endl;
//long integer types 4 or 8 bytes

	long long_var {88}; // 4 OR 8 Bytes
	long int long_int {33};
	signed long signed_long {44};
	signed long int signed_long_int {44};
	unsigned long int unsigned_long_int {44};
	cout << "---------------------------------" << endl;
//long long integer types 8 bytes

	long long long_long {888};// 8 Bytes
	long long int long_long_int {999};
	signed long long signed_long_long {444};
	signed long long int signed_long_long_int {1234};
	unsigned long long int unsigned_long_long_int {1234};
	cout << "---------------------------------" << endl;
// --- Short Types ---
	cout << "short_var: " << short_var << endl;
	cout << "short_int: " << short_int << endl;
	cout << "signed_short: " << signed_short << endl;
	cout << "signed_short_int: " << signed_short_int << endl;
	cout << "unsigned_short_int: " << unsigned_short_int << endl;
	cout << "---------------------------------" << endl;
// --- Int Types ---
	cout << "int_var: " << int_var << endl;
	cout << "signed_var: " << signed_var << endl;
	cout << "signed_int: " << signed_int << endl;
	cout << "unsigned_int: " << unsigned_int << endl;
	cout << "---------------------------------" << endl;
// --- Long Types ---
	cout << "long_var: " << long_var << endl;
	cout << "long_int: " << long_int << endl;
	cout << "signed_long: " << signed_long << endl;
	cout << "signed_long_int: " << signed_long_int << endl;
	cout << "unsigned_long_int: " << unsigned_long_int << endl;
	cout << "---------------------------------" << endl;
// --- Long Long Types ---
	cout << "long_long: " << long_long << endl;
	cout << "long_long_int: " << long_long_int << endl;
	cout << "signed_long_long: " << signed_long_long << endl;
	cout << "signed_long_long_int: " << signed_long_long_int << endl;
	cout << "unsigned_long_long_int: " << unsigned_long_long_int << endl;
	cout << "---------------------------------" << endl;
// --- Short Types ---
	cout << "Size of short_var: " << sizeof(short_var) << " bytes" << endl;
	cout << "Size of short_int: " << sizeof(short_int) << " bytes" << endl;
	cout << "Size of signed_short: " << sizeof(signed_short) << " bytes" << endl;
	cout << "Size of signed_short_int: " << sizeof(signed_short_int) << " bytes" << endl;
	cout << "Size of unsigned_short_int: " << sizeof(unsigned_short_int) << " bytes" << endl;
	cout << "---------------------------------" << endl;
// --- Int Types ---
	cout << "Size of int_var: " << sizeof(int_var) << " bytes" << endl;
	cout << "Size of signed_var: " << sizeof(signed_var) << " bytes" << endl;
	cout << "Size of signed_int: " << sizeof(signed_int) << " bytes" << endl;
	cout << "Size of unsigned_int: " << sizeof(unsigned_int) << " bytes" << endl;
	cout << "---------------------------------" << endl;
// --- Long Types ---
	cout << "Size of long_var: " << sizeof(long_var) << " bytes" << endl;
	cout << "Size of long_int: " << sizeof(long_int) << " bytes" << endl;
	cout << "Size of signed_long: " << sizeof(signed_long) << " bytes" << endl;
	cout << "Size of signed_long_int: " << sizeof(signed_long_int) << " bytes" << endl;
	cout << "Size of unsigned_long_int: " << sizeof(unsigned_long_int) << " bytes" << endl;
	cout << "---------------------------------" << endl;
// --- Long Long Types ---
	cout << "Size of long_long: " << sizeof(long_long) << " bytes" << endl;
	cout << "Size of long_long_int: " << sizeof(long_long_int) << " bytes" << endl;
	cout << "Size of signed_long_long: " << sizeof(signed_long_long) << " bytes" << endl;
	cout << "Size of signed_long_long_int: " << sizeof(signed_long_long_int) << " bytes" << endl;
	cout << "Size of unsigned_long_long_int: " << sizeof(unsigned_long_long_int) << " bytes" << endl;
	cout << "---------------------------------" << endl;
	return 0;
}
