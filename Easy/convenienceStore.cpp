#include <iostream>
#include <vector>
using namespace std;

/*
quarter: 25 cents
dime: 10 cents
nickel: 5 cents
penny: 1 cent
*/

bool changeEnough(vector <int> change, float amoutDue){
    float amount;
    
    amount += change[0] * 0.25;
    amount += change[1] * 0.10;
    amount += change[2] * 0.05;
    amount += change[3] * 0.01;

    if(amount >= amoutDue){
        return true;
    }

    return false;
}

int main(){
    vector<int> change;  // change in your pocket 
    int q, d, n, p;  // quarters, dimes, nickels, pennies
    float amountDue;  // dlžná suma - amount you have to pay

    cout << "How many quarters do you have?: ";
    cin >> q;

    cout << "How many dimes do you have?: ";
    cin >> d;

    cout << "How many nickels do you have?: ";
    cin >> n;

    cout << "How many pennies do you have?: ";
    cin >> p;
    
    change.push_back(q);
    change.push_back(d);
    change.push_back(n);
    change.push_back(p);

    cout << "Enter amount due: ";
    cin >> amountDue;

    cout << boolalpha << changeEnough(change, amountDue);

    return 0;

}