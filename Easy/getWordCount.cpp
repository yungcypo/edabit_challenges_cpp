#include <iostream>
using namespace std;

// I was too lazy to make it detect multiple whitespaces within a string, just at the beginning and at the end

int countWords(string str){
    int result;

    if(str != ""){
        result++;
    }

    while(true){
        if (str[0] == ' '){
            str.erase(0, 1);
        } else {
            break;
        }
    }

    while(true){
        if(str[str.length() - 1] == ' '){
            str.pop_back();
        } else {
            break;
        }
    }

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            result++;
        }
    }


    return result;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << countWords(str);

    return 0;
}