#include <iostream>
using namespace std;

/* 
    Consider the following operation on integer:
        If n is even -> n / 2
        If n is odd -> n * 3 + 1
    Create a function to repeatedly evaluate these operations, until reaching 1. 
    Return the number of steps it took.
*/

int collatz(int n){
    int result;

    if(n == 0 || n == 1){
        return 0;
    } else {
        while(n != 1){
            if(n % 2 == 0){
                n = n / 2;
                result++;
            } else {
                n = n * 3 + 1;
                result++;
            }
        }
    }

    return result;
}

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << collatz(n);

    return 0;
}