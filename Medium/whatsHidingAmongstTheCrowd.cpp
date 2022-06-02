#include <iostream>
using namespace std;

string detectWord(string str){
    string result;

    for(int i = 0; i < str.length(); i++){
        if(islower(str[i])){
            result += str[i];
        }
    }

    return result;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << detectWord(str);

    return 0;

}