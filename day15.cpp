//Typedef and type aliases
/*typedef are reserved keyword used to create an additional name [alias] for another datatypes.
	new identifier for an exissting type helps in redeability and reduces typos
	*/
#include <iostream>
#include <string>
//#include <vector>
//#include <utility>

using namespace std;

//typedef vector<pair<string,int >> pairlist_t;
typedef string str;

int main(){
	//pairlist_t pairlist;	
	str name = "Harananda";
	cout << "My name is " << name << '\n' <<endl;
	return 0;
}
