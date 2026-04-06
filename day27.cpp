//useful string method in C++
//name.clear() -> clears the name
//name.append("example text") -> appends the text to the word
//name.at() -> put an index number at the () to display the letter index of the string
//name.insert(index, what we want to insert) -> used to insert element at the exact index where we want to insert it
//name.find(element you want to find the index for) -> used to find the index of an element
//nmme.erase(index start stop what you want to erase) -> used to erase part of the string using indexing

#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	cout << "Please enter your name: " << endl;			
	getline(cin, name);			//the getline handles the spaces between names 

	if (name.length() > 12){
		cout << "Your name can't be over 12 characters" << endl;
	}else if (name.empty()){
		cout << "Name cannot be empty" << endl;

	}else{
		cout << "Welcome " << name << endl;
	}
name.append("@gmail.com");
	cout << "Your gmail is " << name << endl;

return 0;
}
