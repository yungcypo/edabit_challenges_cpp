#include <iostream>
using namespace std;

// returns maximum length of third edge of triangle
int maxEdge(int a, int b){
    return a + b - 1;
}

int main(){
    int a, b;

    cout << "Enter length of first edge: ";
    cin >> a;

    cout << "Enter length of second edge: ";
    cin >> b;

    cout << maxEdge(a, b);

    return 0;

}
