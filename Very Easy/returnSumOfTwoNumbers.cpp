#include <iostream>
using namespace std;

int addition(int a, int b){
    return a+b;
}

int main(){

    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << addition(a, b);

    return 0;
}
