#include <iostream>
using namespace std;

bool isLessThanOrEqualToZero(int a){
    return a <= 0;
}

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;

    cout << boolalpha;
    cout << isLessThanOrEqualToZero(a);

    return 0;

}