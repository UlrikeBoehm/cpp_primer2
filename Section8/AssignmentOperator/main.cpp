// Section 8

#include <iostream>

using namespace std;

int main() {

    int num1 {10}; // initiaization, it is not an assignment (this only happens when you change a value that already exists in the variable)
    int num2 {20};
    
//    num1 = 100; // assign 100 to num1!!! num1 is the location a value, 100 will be the new value of the location
    num1 = num2 = 1000; // assisiation is right to left
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    return 0;
}