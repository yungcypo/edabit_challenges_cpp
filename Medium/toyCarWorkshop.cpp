#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* 
You work in a toy car workshop, and your job is to build toy cars 
from a collection of parts. 
Each toy car needs 
    4 wheels, 
    1 car body, 
    2 figures of people to be placed inside. 
Given the total number of wheels, car bodies and figures available, 
how many complete toy cars can you make?
*/

int workshop(int w, int b, int f){
    w -= w % 4;
    w /= 4;
    f -= f % 2;
    f /= 2;

    vector<int> arr = {w, b, f};
    sort(arr.begin(), arr.end());

    return arr[0];
}

int main(){
    int w, b, f;

    cout << "Enter the number of wheels: ";
    cin >> w;

    cout << "Enter the number of bodies: ";
    cin >> b;

    cout << "Enter the number of figures: ";
    cin >> f;

    cout << workshop(w, b, f);

    return 0;

}