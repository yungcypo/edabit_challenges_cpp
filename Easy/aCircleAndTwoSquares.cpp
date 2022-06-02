#include <iostream>
#include <cmath>
using namespace std;

/*
Imagine a circle and two squares: a smaller and a bigger one. 
For the smaller one, the circle is a circumcircle and for the bigger one, an incircle.

Create a function, that takes an integer (radius of the circle) and returns the difference of the areas of the two squares
*/

double difference(int r){
    double result;

    result += pow(r * 2, 2);
    result -= pow(r/sqrt(2) * 2, 2);

    return result;
}

int main(){
    int r;

    cout << "Enter radius of a circle: ";
    cin >> r;

    cout << difference(r);

    return 0;

}