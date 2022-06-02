#include <iostream>
using namespace std;

/*
    If given number is multiple of 3, function returns "Fizz"
    If given number is multiple of 5, function returns "Buzz"
    If given number is multiple of both 3 and 5, function returns "FizzBuzz"
*/

string fizzBuzz(int a){
    string result;
    if(a % 3 == 0){
        result += "Fizz";
    }
    if(a % 5 == 0){
        result += "Buzz";
    }

    return result;
}

int main(){
    int a;

    cout << "Enter a number: ";
    cin >> a;

    cout << fizzBuzz(a);

    return 0;

}