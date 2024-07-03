// Write a function that takes the base and height of a triangle and return its area
#include <iostream>

float triArea(int base, int height) {
    return (base*height)/2;
}

int main() {
    std::cout << triArea(3, 2) << std::endl;
    std::cout << triArea(7, 4) << std::endl;
    std::cout << triArea(10, 10) << std::endl;


    return 0;
}