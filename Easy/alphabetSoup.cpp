#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string alphabetSoup(string str){
    sort(str.begin(), str.end());
    return str;
}

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << alphabetSoup(str);

    return 0;
    
}