#include <iostream>
using namespace std;

int points(int pointers2, int pointers3){
    return pointers2 * 2 + pointers3 * 3;
}

int main(){
    int pointers2, pointers3;

    cout << "Enter the number of 2-pointers: ";
    cin >> pointers2;

    cout << "Enter the number of 3-pointers: ";
    cin >> pointers3;

    cout << points(pointers2, pointers3);

    return 0;

}