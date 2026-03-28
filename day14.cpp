//Namespace in C++
/* Namespace provides a solution for preventing name sonflicts in large projects.
	Each entity needs a unique name. 
	A namespace allows for identically named entities as long as the namespaces are different
	we can also usedspecified one like
		int main(){
			using std::cout;		//now we can type only cout for the rest of the code and it will work without the std
		}
*/

#include <iostream>
using namespace std;					//this will allow us to same some time instead of typing std::cout or endl it saves us from typing it every  single time

namespace first{
	int x = 1;
}
namespace second{
	int x = 2;
}

int main(){
	int x = 3;
	cout << "the value of x if nothing is specified is the default: " << x << endl;
	cout << "the value of x if first is specified: " << first::x << endl;				//the :: is known as the scope resolution operator
	cout << "the value of x if second is specified:  " << second::x << endl;
	return 0;
}
/* or we can write something like
#include <iostream>
using namespace std;

namespace first{
	int x = 1;
namespace second{
	int x = 2;

int main(){
	using namespace first;

	int x = 3;
	cout  << x << endl;					//this will display the specified namespace first i,e 1
	
	return 0
}
*/

