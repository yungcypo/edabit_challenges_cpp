#include <iostream>
using namespace std;

string maskify(string str){
    for(int i = 0; i < str.length(); i++){
        if(i < str.length() - 4){
            str[i] = '#';
        } else {
            str[i] = str[i];
        }
    }
    return str;
}

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << maskify(str);

    return 0;

}