// Starter code for Loops in C++
#include <iostream>
using namespace std;

int sqrt_n_upper(int n) {
    // TODO (newton's algorithm, rounded up)
    return 0;
}


bool isPrime(int n) {
    // sieve of eratosthenes approach

    // base case
    if n < 4 {
        return true;
    }
    // test up to sqrt n (rouneded down)
    int upper_bound = sqrt_n_upper(n);
    for (int i = 4; i < upper_bound; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    // nothing divided it; true
    return true;
}

int main() {
    // TODO: Write a for loop
    // TODO: Write a while loop
    return 0;
} 