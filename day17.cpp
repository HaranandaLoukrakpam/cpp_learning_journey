//type conversion in C++
//conversion of a value fron one data-types to another
//implicit = automatic
//explicit = precede calue with new data types

#include <iostream>
using namespace std;

int main() {
    // ---------- Implicit Type Conversion ----------
    cout << "Implicit Type Conversion:\n";

    int intVal = 10;
    double doubleVal;

    // int is automatically converted to double
    doubleVal = intVal;

    cout << "Integer value: " << intVal << endl;
    cout << "Converted to double: " << doubleVal << endl;

    // Another example
    float floatVal = 5.75;
    int result = intVal + floatVal;  // float -> int (implicit, may lose data)

    cout << "Result of int + float (stored in int): " << result << endl;


    // ---------- Explicit Type Conversion ----------
    cout << "\nExplicit Type Conversion:\n";

    double d = 9.78;

    // Manually converting double to int
    int i = (int)d;  // C-style casting

    cout << "Original double: " << d << endl;
    cout << "After explicit conversion to int: " << i << endl;

    // Using modern C++ casting
    double x = 15.99;
    int y = static_cast<int>(x);

    cout << "Original double: " << x << endl;
    cout << "After static_cast to int: " << y << endl;

    return 0;
}
