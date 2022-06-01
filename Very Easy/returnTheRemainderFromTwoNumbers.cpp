#include <iostream>
using namespace std;

int remainder(int a, int b){
    return a % b;
}

int main(){
    int a, b;
    
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << remainder(a, b);

    return 0;

}