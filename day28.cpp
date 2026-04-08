//while loop in python

#include <iostream>
#include <string>
using namespace std;


int main(){
	string name;
	while (name.empty()){				//this will loop until the use enter a name i,e as long as the name variable is empty it will prompt you to enter a name
		cout << "enter your name: " << endl;
		getline(cin, name);
	}
	cout << "Hello, " << name << endl;

return 0;
}
