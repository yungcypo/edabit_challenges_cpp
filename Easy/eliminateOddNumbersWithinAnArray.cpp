#include <iostream>
#include <vector>
using namespace std;

// even - párne
// odd - nepárne

vector<int> noOdds(vector<int> arr){
    vector<int> evens;
    for(int i:arr){
        if(i % 2 == 0){
            evens.push_back(i);
        }
    }
    return evens;
}

int main(){
    vector<int> arr;
    int a;

    while(true){
        cout << "Enter a number (enter 0 to exit): ";
        cin >> a;
        if (a != 0){
            arr.push_back(a);
        } else {
            break;
        }
    }

    arr = noOdds(arr);

    for(int i:arr){
        cout << i << " ";
    }


    return 0;

}