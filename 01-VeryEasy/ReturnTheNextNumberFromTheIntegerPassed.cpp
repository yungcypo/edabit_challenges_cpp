// Create a function that takes a number as an argument, add one to the number, and return the result
#include <iostream>

int addition(int i) {
    return i+1;
}

int main() {
    std::cout << addition(0) << std::endl;
    std::cout << addition(9) << std::endl;
    std::cout << addition(-3) << std::endl;

    return 0;
}