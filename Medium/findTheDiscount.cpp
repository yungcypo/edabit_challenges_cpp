#include <iostream>
using namespace std;

float dis(float price, float discount){
    return price - price * (discount / 100);
}

int main(){
    int price, discount;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter discount: ";
    cin >> discount;

    cout << dis(price, discount);

    return 0;

}