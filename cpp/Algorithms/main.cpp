/*
Name: Rayyan Aamir
Date: May 24, 2022
Program: Sorting and Searching algorithms in C++
*/

#include <iostream>
#include <string>
using namespace std;

// Insertion sort algorithm
int insertionSort(int array[]) {
    int i;
    int j;
    int size = sizeof(array) / sizeof(array[0]);
    int temp;

    for (i=0; i<size; i++) 
        // Store current value
        temp = array[i];
        j = i - 1;

        // While previous element is greater than temp
        while (j>=0) {
            // Move current element backward
            array[j+1] = array[j];
            j -= 1;
        }

        // Move current element forward
        array[j+1] = temp;
}

// Linear Search Algorithms
int iterativeLinearSearch(int array[], int target) {
    int size = sizeof(array) / sizeof(array[0]);

    for (int i=0; i<size; i++)
        if (array[i] == target) {
            return i;
        }
    
    return -1;
}

int recursiveLinearSearch(int array[], int f, int l, int target) {
    int size = sizeof(array) / sizeof(array[0]);

    if (l < f) {
        return -1;
    } else if (array[f] == target) {
        return f;
    } else if (array[l] == target) {
        return l;
    } else {
        return recursiveLinearSearch(array, f+1, l-1, target);
    }
    
}

// Binary Search Algorithms
int recursiveBinarySearch(int array[], int l, int r, int target) {
    if (r >= 1) {
        int middle = 1 + (r-1)/2;

        // Base case
        if (array[middle] == target) // Is the middle
            return middle;
        
        else if (array[middle] > target) // Target is lower
            return recursiveBinarySearch(array, l, middle-1, target);

        // Else it is higher
        return recursiveBinarySearch(array, middle+1, r, target);
        
    }
    return -1;
}

int iterativeBinarySearch(int array[], int l, int r, int target) {
    while (r != l) {
        int middle = 1 + (r-1)/2;

        if (array[middle] == target) {
            return middle;
        } else if (array[middle] > target) {
            r = middle - 1;
            continue;
        } else {
            l = middle + 1;
            continue;
        }
    }
    return -1;
}

int reuse() {
    while (true) {
        string re;
        cout << "Do you want to reuse this program?\n";
        getline(cin, re, '\n');
        if (re[0] == 'y' or re[0] == 'Y') {
            return true;
        } else if (re[0] == 'n' or re[0] == 'N') {
            return false;
        } else {
            cout << "(Yes or no)";
        }
    }
}

// Program start
int main() {
    while (true) {
        int test[] = {12, 34, 65, 8, 4, 130, 29};
        cout << "\nArray: " << test;

        insertionSort(test);
        cout << "Insertion sorted array: " << test;

        // User selects target
        int target;
        cout << "Enter the target: ";
        cin >> target; // Cannot check if target is int sadly :(

        // User selects algorithm
        int algorithm = -1;
        while (true) {
            cout << "\nALGORITHMS:\n1. Linear Iterative\n2. Linear Recursive\n3. Binary Iterative\n4. Binary Recursive\n";
            cout << "Enter the number denoting the search algorithm to use: ";
            cin >> algorithm;
            if (algorithm > 0 || algorithm < 5) {
                break;
            } else {
                cout << "\nInvalid input";
            }
        }

        // Call function
        int result;
        switch (algorithm) {
            case 1:
                result = iterativeLinearSearch(test, target); // Doesn't work
                break;
            case 2:
                result = recursiveLinearSearch(test, 0, (sizeof(test)/sizeof(test[0])), target); // Works
                break;
            case 3:
                result = iterativeBinarySearch(test, 0, (sizeof(test)/sizeof(test[0])), target); // Works
                break;
            case 4:
                result = recursiveBinarySearch(test, 0, (sizeof(test)/sizeof(test[0])), target); // Doesn't work
                break;
        }

        // Result 
        if (result != -1) {
            cout << "\nTarget is present at index " << result;
        } else {
            cout << "\nTarget is absent";
        }

        // Reuse program?
        if (reuse() == true) {
            continue;
        } else {
            break;
        }
    }

    return 0;
}
