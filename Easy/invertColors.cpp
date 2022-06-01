#include <iostream>
using namespace std;

void invertColors(int r, int g, int b, int arr[]){
    arr[0] = 255 - r;
    arr[1] = 255 - g;
    arr[2] = 255 - b;
}

int main(){

    int r, g, b;
    int arr[3];

    cout << "Enter value of R: ";
    cin >> r;

    cout << "Enter value of G: ";
    cin >> g;

    cout << "Enter value of B: ";
    cin >> b;

    invertColors(r, g, b, arr);

    cout << endl << "Inverted color is: " << arr[0] << ", " << arr[1] << ", " << arr[2];

    return 0;

}