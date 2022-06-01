#include <iostream>
using namespace std;

// Bartender only serves drinks to people 18 and older and when he's not on break
bool shouldServeDrinks(int age, bool onBreak){
    if (age >= 18 && !onBreak){
        return true;
    } else {
        return false;
    }
}

int main(){
    int age;
    bool onBreak;

    cout << "Enter age: ";
    cin >> age;

    cout << "Is he on break? (0 or 1): ";
    cin >> onBreak;

    cout << boolalpha;
    cout << shouldServeDrinks(age, onBreak);

    return 0;

}