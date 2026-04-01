//if statement in C++
#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    if(age < 0){
        cout << "Impossible" << endl;
    }
    else if(age > 100){
        cout << "Too old" << endl;
    }
    else if(age >= 18){
        cout << "You are allowed on this website" << endl;
    }
    else{
        cout << "You are not allowed on the website" << endl;    
    }

    return 0;
}
