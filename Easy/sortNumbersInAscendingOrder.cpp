#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


vector<int> sortNumsAscending(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr;
}


int main(){
    vector <int> arr;
    int a;

    while(true){
        cout << "Enter a number (enter 0 to exit): ";
        cin >> a;
        if(a != 0){
            arr.push_back(a);
        } else {
            arr.push_back(0);
            break;
        }
    }

    arr = sortNumsAscending(arr);

    for(int i:arr){
        cout << i << " ";
    }

    return 0;

}