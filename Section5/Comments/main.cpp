/*******************************************************************
 * author: Ulrike Boehm
 * date: 1/12/2020
 * location: Janelia Reserach Campus
 ******************************************************************/

#include <iostream>

// This is a single line comment

/* This is a multiple
 line 
  comment */

// Using a modified version Dijkstra's algorithim to improve space efficieny 

int main() {   // main():  no information is expected from the operating system in order for the program to run
    
    int favorite_number; // This is where my favorite number is stored
    
    std::cout << "Enter your favorite number between 1 and 100: "; // cout: consule
    
    std::cin >> favorite_number; // cin: keyboard
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number too" << std::endl;
    
    return 0;
}