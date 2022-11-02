#include <iostream>

// Given an array of integers, return the largest value
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
    int list[] = {1,2,3,4,5,6};
    int highest = getMax(list);
    std::cout << highest;
    return 0;
}