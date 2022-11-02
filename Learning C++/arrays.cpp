#include <iostream>

int main() {
    // Array must be defined with the datatype it contains
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};

    // The square brackets in the array initialization can be filled with a max length limit
    char letters[26] = {'A', 'b', 'c'}; // letters cannot exceed length 26
    letters[0] = 'a'; // Mute an existing element
    letters[3] = 'd'; // Add 'D' as fourth element
    // You can also add an element that isn't necessarily "next up" in terms of indices
    letters[25] = 'z';

    std::cout << letters;

    return 0;
}