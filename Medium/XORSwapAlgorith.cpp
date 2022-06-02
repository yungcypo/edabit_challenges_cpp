#include <iostream>
using namespace std;

// idk what XOR is, but they'e swapped tho :)

pair<int, int> XOR (int a, int b){
    pair <int, int> p;
    p.first = b;
    p.second = a;
    return p;
}

/*
// found this as 'right solution'
std::pair<int, int> XOR(int a, int b) {
	a^=b^=a^=b;
	return std::make_pair(a, b);
}
*/

int main(){
    int a, b;
    pair <int, int> p;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    p = XOR(a, b);

    cout << p.first << " " << p.second;

    return 0;

}