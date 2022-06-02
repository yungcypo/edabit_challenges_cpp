#include <iostream>
#include <vector>
using namespace std;

/*
For each number in an array, 
check if that number is greater than the sum of all numbers 
that appear before it in the array. 
If all numbers in the array pass this test, return true. Return false otherwise.
*/

bool greaterThanSum(vector<int> v){
    int sum = v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i] > sum){
            sum += v[i];
            continue;
        } else {
            return false;
        }
    }

    return true;
}

int main(){
    vector<int> v;
    int a;

    while(true){
        cout << "Enter a number: (enter 0 to exit): ";
        cin >> a;

        if(a != 0){
            v.push_back(a);
        } else {
            break;
        }
    }

    cout << boolalpha << greaterThanSum(v);

    return 0;
}