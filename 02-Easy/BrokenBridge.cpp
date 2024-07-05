// you will get a 'bridge' which is a string, for example "######" or "### ###". you have to decide if the bridge is safe = if it does not contain space 

#include <iostream>
#include <string>

bool isSafeBridge(std::string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << isSafeBridge("####") << std::endl;
    std::cout << isSafeBridge("## ####") << std::endl;
    std::cout << isSafeBridge("#") << std::endl;

    return 0;
}
