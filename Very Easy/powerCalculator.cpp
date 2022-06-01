#include <iostream>
using namespace std;

int powerCalc(int voltage, int current){
    return voltage * current;
}

int main(){
    int voltage, current;
    
    cout << "Enter voltage: ";
    cin >> voltage;
    
    cout << "Enter current: ";
    cin >> current;

    cout << powerCalc(voltage, current);

    return 0;

}
