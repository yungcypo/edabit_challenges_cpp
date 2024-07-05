// you get a string, for example "hello world" and you have to make it reversed = "dlrow olleh" 

#include <iostream>
#include <string>

std::string reverse(std::string s) {
    std::string result = "";

    for (int i = s.size(); i >= 0; i--) {
        result += s[i];
    }

    return result;
}

int main() {
    std::cout << reverse("Hello world") << std::endl;
    std::cout << reverse("The quick brown fox.") << std::endl;
    std::cout << reverse("Edabit is really helpful!") << std::endl;

    return 0;
}