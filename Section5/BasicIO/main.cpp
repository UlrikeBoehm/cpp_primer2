// Section5
// Basic I/O using cin and cout

#include <iostream>

using namespace std; // avoids std::cout etc notations; problem: it restricts mutliple names since it loads the entire standard notations; result: code is easier to read

int main() {
    
 //   cout << "Hello World!" << endl;
 
//    cout << "Hello";
//    cout << "World" << endl;
//    
//    cout << "Hello world!" << endl;
//    cout << "Hello" << " world!" << endl;
//    cout << "Hello" << " world!\n";
//    cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3; // floating point number aka a real number
//    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;

//    cout << "Enter a first integer: ";
//    cin >> num1;
//    
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    
//    cout << "You entered " << num1 << " and " << num2 << endl;

//    cout << "Enter 2 integers separated with a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;
    
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "You entered: " << num3 << endl;

    return 0;
}