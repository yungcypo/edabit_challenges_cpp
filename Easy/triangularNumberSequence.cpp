#include <iostream>
using namespace std;

int triangle(int a){
    int result;
    for(int i = a; i != 0; i--){
        result += i;
    }
    return result;
}

int main(){
    int a;
    cout << "Enter level of triangle: ";
    cin >> a;

    cout << triangle(a);

    return 0;

}
