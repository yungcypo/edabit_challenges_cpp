#include <iostream>
#include <vector>
using namespace std;

string uncensor(string word, string vowels){
    vector<char> v;
    for(int i = 0; i < vowels.length(); i++){
        v.push_back(vowels[i]);
    }

    for(int i = 0; i < word.length(); i++){
        if(word[i] == '*'){
            word[i] = v[0];
            v.erase(v.begin() + 0);
        }
    }

    return word;
}

int main(){

    string word, vowels;

    cout << "Enter word(s): ";
    getline(cin, word);

    cout << "Enter vowels: ";
    getline(cin, vowels);

    cout << uncensor(word, vowels);

    return 0;

}