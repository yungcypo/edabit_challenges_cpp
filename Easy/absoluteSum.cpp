#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int getAbsSum(vector<int> vector){
    int result = 0;    
    for(int i:vector){
        result += abs(i);
    }
    return result;
}

int main(){
    
    int a;
    vector<int> vector;

    while(true){
        cout << "Enter a number to add (enter 0 to exit): ";
        cin >> a;
        if(a != 0){
            vector.push_back(a);
        } else {
            break;
        }
    }


    cout << endl << "Your result is: " << getAbsSum(vector);

    return 0;

}
