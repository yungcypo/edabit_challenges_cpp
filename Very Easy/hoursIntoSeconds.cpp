#include <iostream>
using namespace std;

int hoursIntoSeconds(int hours){
    return hours * 3600;
}

int main(){
    int hours;
    cout << "Enter hours: ";
    cin >> hours;

    cout << hoursIntoSeconds(hours);

    return 0;

}