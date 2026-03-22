//C++ Program Execution Model & Memory Model
/* How the flow of codes look like
	User Code -> Compiler -> Binary Executable file ->

	When we run a user program here it what it looks like:
		->User Program[Disk Memory] -> RAM -> CPU[starts executing line by line] 
		each statement variable and function allocate some memory in the RAM and the CPU handles this allocation
*/
#include <iostream>
using namespace std;

int main(){
	cout << " Today I learn about How user program are stored and accessed in the Memory and How it works with Cpu in memory allocation and accessing. " << endl;
	return 0;

}
