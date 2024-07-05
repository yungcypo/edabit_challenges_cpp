// burp where 'r' is present *num* times

#include <iostream>
#include <string>

std::string longBurp(int num) {
    std::string result = "Bu";

    for (int i = 0; i < num; i++) {
        result += "r";
    }

    return result + "p";
}

int main() {
    std::cout << longBurp(3) << std::endl;
    std::cout << longBurp(5) << std::endl;
    std::cout << longBurp(9) << std::endl;

    return 0;
}