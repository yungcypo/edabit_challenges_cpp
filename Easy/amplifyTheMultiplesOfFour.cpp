#include <iostream>
#include <vector>
using namespace std;

/*
Create a function that takes an integer and returns an array from 1 to the given number, where:
    If the number can be divided evenly by 4, amplify it by 10 (i.e. return 10 times the number).
    If the number cannot be divided evenly by 4, simply return the number
*/

vector<int> amplify(int n){
    vector<int> result;

    for(int i = 1; i <= n; i++){
        if(i % 4 != 0){
            result.push_back(i);
        } else {
            result.push_back(i * 10);
        }
    }

    return result;
}

int main(){
    int n;
    vector<int> v;

    cout << "Enter a number: ";
    cin >> n;

    v = amplify(n);

    for(int i:v){
        cout << i << " ";
    }

    return 0;
}