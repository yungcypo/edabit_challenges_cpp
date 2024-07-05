// count the number of syllables in given string. each two syllables are separated by '-' 

#include <iostream>
#include <string>

int numberSyllables(std::string word) {
    int count = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == '-') {
            count++;
        }
    }

    return count + 1;
}


int main() {
    std::cout << numberSyllables("buf-fet") << std::endl;
    std::cout << numberSyllables("beau-ti-ful") << std::endl;
    std::cout << numberSyllables("mon-u-men-tal") << std::endl;
    std::cout << numberSyllables("on-o-mat-o-poe-ia") << std::endl;

    return 0;
}