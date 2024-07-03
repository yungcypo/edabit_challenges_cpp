// Create a function that takes two numbers as arguments and returns their sum
#include <iostream>

int addition(int a, int b) {
    return a + b;
}

int main() {
    std::cout << addition(3, 2) << std::endl;
    std::cout << addition(-3, -6) << std::endl;
    std::cout << addition(7, 3) << std::endl;
    
    return 0;
}
