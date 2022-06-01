#include <iostream>
using namespace std;

int minutesToSeconds(int min){
    return min * 60;
}

int main(){
    int min;

    cout << "Enter minutes: ";
    cin >> min;

    cout << minutesToSeconds(min);
}