#include <iostream>
using namespace std;

bool flip (bool boolean){
    return !boolean;
}

int main(){
    bool boolean;

    cout << "Enter a boolean (0 or 1): ";
    cin >> boolean;

    cout << flip(boolean);

    return 0;

}