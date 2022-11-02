// Practice using pointers

#include <iostream>
#include <string>

int main() {
    std::string food = "Pizza"; 
    std::cout << food; //  Value
    std::cout << &food; // Use an ampersand to access memory address

    // DECLARING A POINTER
    // A pointer stores the memory address as its value
    // The pointer variable must be the same type as the reference variable
    // POSITION OF ASTERISK DOESN'T MATTER!
    std::string* pFood = &food; // A pointer variable named "pFood" is storing the address of variable "food"

    // The two lines below output the exact same thing 
    // (the memory address of the variable "food")
    std::cout << &food;
    std::cout << pFood;

    // DEREFERENCING A POINTER
    // Use the pointer to get the value of the variable which's address it contains
    std::cout << *pFood; // "Pizza"

    // Modifying the value of the pointer will also change the value of the variable which's address it contains
    *pFood = "Hamburger";
    std::cout << food; // Since "*ptr" was linked to "food", both variables now contain "Hamburger"

    // You can dereference a memory address in place as well
    std::cout << *&food; 
    // This gives the value at the memory address of the food variable
    // Which is just the "food" variable itself
    // If you put another &, then it'll give the memory address again
    // * and & basically cancel out

    return 0;
}