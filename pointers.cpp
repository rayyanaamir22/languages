// Practice using pointers

#include <iostream>
#include <string>
using namespace std;

string food = "Pizza"; 
cout << food; //  Value
cout << &food; // Memory address

// A pointer stores the memory address as its value
// The pointer variable must be the same type as the reference variable
string* ptr = &food; // A pointer variable named "ptr" is storing the address of variable "food"

// The two lines below output the exact same thing
cout << &food;
cout << ptr;

// Dereferencing: Use the pointer to get the value of the variable which's address it contains
cout << *ptr; // "Pizza"

// Modifying the value of the pointer will also change the value of the variable which's address it contains
*ptr = "Hamburger";
cout << food; // Since "*ptr" was linked to "food", both variables now contain "Hamburger"