#include <iostream>
#include <string>
using namespace std;

int main(){
	string month;
	cout << "Enter yoour birth month[1-12]: " << endl;
	cin >> month;

	switch(month){
y		case "january":
			cout << "your birthday is January" << endl;
			break;
		case "febuary":
			cout << "your birthday is febuary" << endl;
			break;
		case "march":
			cout << "your birthday is march" << endl;
			break;
		case "april":
			cout << "your birthday is april" << endl;
			break;
		case "may":
			cout << "your birthday is may" << endl;
			break;
		case "june":
			cout << "your birthday is June" << endl;
			break;
		case "july":
			cout << "your birthday is July" << endl;
			break;
		case "august":
			cout << "your birthday is august" << endl;
			break;
		case "september":
			cout << "your birthday is september" << endl;
			break;
		case "october":
			cout << "your birthday is october" << endl;
			break;
		case "november":
			cout << "your birthday is november" << endl;
			break;
		case "december":
			cout << "your birthday is december" << endl;
			break;
		default:
			cout << "Please enter name of month in smaller case"<< endl

	}
return 0;

