#include <iostream>
using namespace std;


bool isBridgeSafe(string str){
    bool isSafe = true;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            return 0;
        }
    } 
    return 1;
}


int main(){
    string str;

    cout << "Enter bridge: ";
    getline(cin, str);

    if(isBridgeSafe(str)){
        cout << "This bridge is safe";
    } else {
        cout << "This bridge is not safe";
    }
    
    return 0;
}