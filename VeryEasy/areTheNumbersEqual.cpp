#include <iostream>
using namespace std;

bool isEqual(int a, int b){
    return a == b;
}

int main(){
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b; 

    cout << boolalpha;
    cout << isEqual(a, b);

    return 0;

}