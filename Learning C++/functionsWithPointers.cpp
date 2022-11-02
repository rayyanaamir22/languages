#include <iostream>

int hoursToSeconds(signed long *hoursPtr) {
    return 1;//(&hoursPtr * 3600);
}

int main() {
    std::cout << hoursToSeconds(45);

    return 0;
}