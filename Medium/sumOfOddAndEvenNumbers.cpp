#include <iostream>
#include <vector>
using namespace std;

vector<int> sumOddAndEven(vector<int> arr){
    int oddSum, evenSum;
    for(int i:arr){
        if(i % 2 == 0){
            evenSum += i;
        } else {
            oddSum += i;
        }
    }
    
    arr.clear();
    arr.push_back(evenSum);
    arr.push_back(oddSum);
    
    return arr;
}

int main(){
    vector<int> arr;
    int a;

    while(true){
        cout << "Enter a number (enter 0 to exit): ";
        cin >> a;
        if(a != 0){
            arr.push_back(a);
        } else {
            break;
        }
    }

    arr = sumOddAndEven(arr);

    for(int i:arr){
        cout << i << " ";
    }
    
    return 0;

}