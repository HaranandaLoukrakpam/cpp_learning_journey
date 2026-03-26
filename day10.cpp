//Fractional numbers in C++
/* Fractional number are also called as floating point value and are used to represent fractional number in c++
	There are 3-types to represent or store a fractional number in C++:
		float -> size: 4 bytes, precision: 7, comment: ---
		double => size: 8 bytes, precision:15, comment: Recommended default
		long double -> 12 bytes, precision: >double, comment: 

			Precision: It is the number of value after the decimal points
			*/

#include <iostream>
#include <string>

int main() {
    // Floating Point Types
    float f {1.12345f};            // Single precision
    double d {1.123456789};        // Double precision
    long double ld {1.123456789L}; // Extended precision

    // Character and Boolean Types
    char c {'A'};                  // Single character
    bool b {true};                 // Boolean (true/false)

    // Text (String)
    std::string text {"Hello"};    // Dynamic string object

    // Print Sizes
    std::cout << "--- Floating Point Sizes ---" << std::endl;
    std::cout << "sizeof(float)       : " << sizeof(f)  << " bytes" << std::endl;
    std::cout << "sizeof(double)      : " << sizeof(d)  << " bytes" << std::endl;
    std::cout << "sizeof(long double) : " << sizeof(ld) << " bytes" << std::endl;

    std::cout << "\n--- Other Basic Sizes ---" << std::endl;
    std::cout << "sizeof(char)        : " << sizeof(c)  << " byte" << std::endl;
    std::cout << "sizeof(bool)        : " << sizeof(b)  << " byte" << std::endl;

    std::cout << "\n--- Text Object Size ---" << std::endl;
    // Note: sizeof(std::string) returns the size of the control structure,
    // not the length of the specific text string it holds.
    std::cout << "sizeof(std::string) : " << sizeof(text) << " bytes" << std::endl;

    return 0;
}
