#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int spinAround(vector<char> v){
    float result;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 'l'){
            result -= 0.25;
        } else if (v[i] == 'r'){
            result += 0.25;
        }
    }

    return abs(floor(result));
}

int main(){
    vector<char> v;
    string a;

    while(true){
        cout << "Enter left (l) or right (r) (anything else to exit): ";
        cin >> a;
        
        if(a == "left" || a == "l"){
            v.push_back('l');
        } else if (a == "right" || a == "r"){
            v.push_back('r');
        } else {
            break;
        }
    }

    cout << spinAround(v);

    return 0;

}