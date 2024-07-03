// Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers
#include <iostream>

int nextEdge(int a, int b) {
    return a + b - 1;
}

int main() {
    std::cout << nextEdge(8, 10) << std::endl;
    std::cout << nextEdge(5, 7) << std::endl;
    std::cout << nextEdge(9, 2) << std::endl;


    return 0;
}