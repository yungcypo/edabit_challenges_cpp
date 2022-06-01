#include <iostream>
using namespace std;

int convert(int hours, int minutes){
    return hours * 3600 + minutes * 60;
}

int main(){
    int hours, minutes;

    cout << "Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << convert(hours, minutes);

    return 0;

}