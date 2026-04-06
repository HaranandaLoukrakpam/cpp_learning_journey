//temperature conversion program
#include <iostream>
using namespace std;

int main(){
	double temp;
	char symbol;
	double celsius;
	double farenheit;
	cout << "===== The best temperature convertor in the world ===== " << endl;

	cout << "Enter the temperature: " << endl;
	cin >> temp;

	cout << "Enter the symbol to convert it to[c,f]: " << endl;
	cin >> symbol;

	switch(symbol){
		case 'c':
			celsius = (temp - 32)*0.5555;
			cout << "The equivalent celcius of the temperature you have given in farenheit is: " << celsius << endl;
			break;
		case 'f':
			farenheit = (temp * 1.8)+32;
			cout << "The equivalent farenheit of the temperature you have given in celsius is: " << farenheit << endl;
			break;
		default:
			cout << "Please enter a valid symbol" << endl;
			break;
	}
return 0;
}
