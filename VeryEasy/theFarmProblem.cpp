#include <iostream>
using namespace std;

int animals(int chickens, int cows, int pigs){
    return chickens * 2 + cows * 4 + pigs * 4;
}

int main(){
    int chickens, cows, pigs;

    cout << "Enter the number of chickens: ";
    cin >> chickens;

    cout << "Enter the number of cows: ";
    cin >> cows;

    cout << "Enter the number of pigs: ";
    cin >> pigs;

    cout << animals(chickens, cows, pigs);

    return 0;
}