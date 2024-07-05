// Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element

#include <iostream>
#include <vector>

int getAbsSum(std::vector<int> arr) {
    int result = 0;

    for (int i = 0; i < arr.size(); i++) {
        result += abs(arr[i]);
    }

    return result;
}

int main() {
    std::cout << getAbsSum({2, -1, 4, 8, 10}) << std::endl;
    std::cout << getAbsSum({-3, -4, -10, -2, -3}) << std::endl;
    std::cout << getAbsSum({2, 4, 6, 8, 10}) << std::endl;
    std::cout << getAbsSum({-1}) << std::endl;

    return 0;
}