#include <iostream>
using namespace std;

// obvod
int perimeterOfRectangle(int a, int b){
    return 2 * a + 2 * b;
}

int main(){
    int a, b;

    cout << "Enter base of rectangle: ";
    cin >> a;

    cout << "Enter height of rectangle: ";
    cin >> b;

    cout << perimeterOfRectangle(a, b);

    return 0;

}