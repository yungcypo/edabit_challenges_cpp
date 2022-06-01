#include <iostream>
using namespace std;

double areaOfTriangle(double a, double v){
    return a * v / 2;
}

int main(){
    double a, v;
    
    cout << "Enter base of triangle: ";
    cin >> a;

    cout << "Enter height of triangle: ";
    cin >> v;


    
    cout << areaOfTriangle(a, v);

    return 0;

}