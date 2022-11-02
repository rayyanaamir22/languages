#include <iostream>
#include <string>

int exponentiate(int x, int n) { // Raise x to an integer exponent n>1
    /*Is there a way to make a docstring?*/
    int total = 1;
    for (int i=0; i<n; i++) {
        total *= x;
    }
    return total;
}

// You can create a function signature, and define it later
void highGround(std::string name); // This function is defined AFTER main()

// Make some arrays
int theGrid[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

// Given an array pointer, return the largest value in the array
int getMax(int* arr) {
    int length = sizeof(arr)/sizeof(arr[0]);
    int max = 0; // Initially
    for (int i=0; i<length; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Modify
        }
    }
    return max;
}

int main() {
    // Call this function
    int result = exponentiate(2, 5); // Should return 32
    std::cout << result << "\n";

    highGround("Rayyan"); // Can use the function before definition, if it is named earlier
    int highest = getMax(&theGrid);

    return 0;
}

// Actual definition of the function
void highGround(std::string name) {
    std::cout << "Hello there, " << name << ".\n";
}