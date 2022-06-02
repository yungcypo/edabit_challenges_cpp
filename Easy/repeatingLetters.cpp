#include <iostream>
using namespace std;

string doubleChar(string str){
    string result;
    for(int i = 0; i < str.length(); i++){
        for(int j = 1; j <= 2; j++){
            result += str[i];
        }
    }

    return result;
}

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << doubleChar(str);

    return 0;

}