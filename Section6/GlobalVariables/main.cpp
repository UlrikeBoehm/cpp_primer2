// Section 6
// Global and local variables

#include <iostream>

using namespace std;

int age {18}; // Global variable - outside of the main() function 

int main() {
    
 //   int age {16}; // local variable - inside of the main() function
    
    cout << age << endl;
    
    return 0;
}