#include <iostream>
using namespace std;

// return if sum of both numbers < 100

bool lessThan100(int a, int b){
    if (a + b < 100){
        return true;
    } else {
        return false;
    }
}

int main(){
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << boolalpha;
    cout << lessThan100(a, b);

    return 0;

}