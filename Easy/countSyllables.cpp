#include <iostream>
using namespace std;

int countSyllables (string str){
    int result = 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '-'){
            result++;
        }
    }
    return result;
}

int main(){
    string str;

    cout << "Enter a word, separate syllables with \'-\' : ";
    cin >> str;

    cout << "Number of syllables: " << countSyllables(str);

    return 0;

}