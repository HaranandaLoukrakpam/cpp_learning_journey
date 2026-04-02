//switches in C++

#include <iostream>
using namespace std;

int main(){
	int month;
	cout << "Enter yoour birth month[1-12]: " << endl;
	cin >> month;

	switch(month){
		case 1:
			cout << "your birthday is January" << endl;
			break;
		case 2:
			cout << "your birthday is febuary" << endl;
			break;
		case 3:
			cout << "your birthday is march" << endl;
			break;
		case 4:
			cout << "your birthday is april" << endl;
			break;
		case 5:
			cout << "your birthday is may" << endl;
			break;
		case 6:
			cout << "your birthday is June" << endl;
			break;
		case 7:
			cout << "your birthday is July" << endl;
			break;
		case 8:
			cout << "your birthday is august" << endl;
			break;
		case 9:
			cout << "your birthday is september" << endl;
			break;
		case 10:
			cout << "your birthday is october" << endl;
			break;
		case 11:
			cout << "your birthday is november" << endl;
			break;
		case 12:
			cout << "your birthday is december" << endl;
			break;
		default:
			cout << "Please enter only the number"<< endl;
			break;

	}
return 0;
}
