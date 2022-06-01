#include <iostream>
using namespace std;

int returnTheNextNum(int num){
    return ++num;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << returnTheNextNum(num);

    return 0;

}