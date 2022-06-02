#include <iostream>
#include <vector>
using namespace std;

/*
adds 2 to every odd number n times 
subtracts 2 from every even number n times
*/

vector<int> evenOddTransform(vector<int> v, int n){
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0){
            v[i] -= 2 * n;
        } else {
            v[i] += 2 * n;
        }
    }
    return v;
}

int main(){
    vector<int> v;
    int a, n;

    while(true){
        cout << "Enter a number (enter 0 to exit): ";
        cin >> a;
        if(a != 0){
            v.push_back(a);
        } else {
            break;
        }
    }

    cout << "Enter how many times to perform it (n): ";
    cin >> n;

    v = evenOddTransform(v, n);

    for(int i:v){
        cout << i << " ";
    }

    return 0;

}