#include <iostream>
#include <vector>
using namespace std;

int letterCounter(vector<vector<char>> v, char character){
    int charCount;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            if(v[i][j] == character){
                charCount++;
            }
        }
    }
    return charCount;
}

int main(){
    vector<vector<char>> v {
        {'D', 'E', 'Y', 'H', 'A', 'D'},
        {'C', 'B', 'Z', 'Y', 'J', 'K'},
        {'D', 'B', 'C', 'A', 'M', 'N'},
        {'F', 'G', 'G', 'R', 'S', 'R'},
        {'V', 'X', 'H', 'A', 'S', 'S'}
    };

    char character;

    cout << "Enter a character: ";
    cin >> character;

    cout << letterCounter(v, character);

    return 0;

}