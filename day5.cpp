//Input and Output in C++
	/* How to take in user-input and display output to the user in C++
		std::cout -> to print out the data to display to the user
		std::cin -> to read the data taken from the user
		std::cerr -> prints error to the console
		std::clog -> prints log messages to the console
		
			<< data is being put to whatever is in the left
			>> data is being put to whatever there is on the right

		std::getline(std::cin,'variable-name')
			This is use incase we want to take a user_name input but hte name has spaces between them like "Harananda Loukrakpam"
	*/

#include <iostream>
#include <string>
using namespace std;


int main(){
	cout << "Hello everyone todat I'm learning how to take input from user and also to print out to user or to the console" << endl;
	
	//int Age(67);
	//cout << "Six-Seven:" << Age << endl;

	//cerr << "Error-Message: Yup you mess up big time buddy" << endl;
	//clog << "Log-Message: Just leave a log message" << endl;	

	int age;
	string name;

	cout<< "Please enter you name and age: " << endl;					//Prints out a statement to let the user know what to enter

	//cin >> name;														//Reads the value input of the user and stores it in name variable, this will fail in case the full name has spaces so lets fix this

	getline(cin,name);													//able to take full name input even with the spaces
	cin >> age;															//Reads the value inpput of the user and stores it in the age variable

	cout << "Hello " << name << " you are " << age << " year old." << endl;

	return 0;
}

