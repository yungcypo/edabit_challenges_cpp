#include <iostream>
using namespace std;

string burp(int n){
    string result = "bu";
    for(int i = 1; i <= n; i++){
        result += 'r';
    }
    result += 'p';
    return result;
}

int main(){
    int n;

    cout << "Enter the length of burp: ";
    cin >> n;

    cout << burp(n);

    return 0;

}