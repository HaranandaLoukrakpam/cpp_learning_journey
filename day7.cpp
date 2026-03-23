//C++ core language vs Standard Library vs STL
	//Core components are what makes the base of C++ language they include the syntax and all the rules and regulation it abide by
	//STL can be considered as a highly specialised part of C++ standard library

#include <iostream>								//the <iostream> and <string> are standard library in C++
#include <string>

using namespace std;

int main(){

	string name;

	cout<< "Please enter your name: " << endl;
	cin >> name;

	cout << "Hi " << name << ", today I learn about core language, stamdard library and STL in C++>" <<endl;

	return 0;
}
