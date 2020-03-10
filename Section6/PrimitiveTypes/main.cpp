// Section 6
// Primitive Types

#include <iostream>

using namespace std;

int main() {
    
    /***********************************************
     * Character Type
     * ********************************************/
    
    char middle_initial {'J'}; // Notice the single quotes around characters (double quotes would make it a string)
    cout << "My middle initial is " << middle_initial << endl; 
    
    /***********************************************
     * Integer Type
     * ********************************************/
     
     unsigned short int exam_score {55}; // same as unsigned short exam_score {55};
     cout << "My exam score was " << exam_score << endl;
     
     int countries_represented {65}; // list initialization syntax to be prefered since it catched overflows in real time!!!
     cout << "There were " << countries_represented << " countries represented in my meeting" << endl;
     
     long people_in_florida {20610000};
     cout << "There are about " << people_in_florida << " people in Floria" << endl;
     
//     long people_on_earth = 7'600'000'000; // This type of initialization would cause an error in the output since the long data type is too short; with the curvy brackets it would have been possible to catch the initialization error 
//     cout << "There are about " << people_on_earth << " people on earth" << endl;  
     
    long long people_on_earth {7'600'000'000};
     cout << "There are about " << people_on_earth << " people on earth" << endl;
     
     long long distance_to_alpha_centauri {9'461'000'000'000};
     cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
     
    /***********************************************
     * Floating point types
     * ********************************************/
     
     float car_payment {401.23};
     cout << "My car payment is " << car_payment << endl;
     
     double pi {3.14159};
     cout << "PI is " << pi << endl;
     
     long double  large_number {2.7e120};
     cout << large_number << " is a very big number" << endl;
     
    /***********************************************
     * Floating point types
     * ********************************************/
     
     bool game_over {false};
     cout << "The value of gameOver is " << game_over << endl; 
     
    /***********************************************
     * Floating point types
     * ********************************************/
     
     short value1 {30000};
     short value2 {1000};
     int product {value1 * value2};
     cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;

    return 0;
}