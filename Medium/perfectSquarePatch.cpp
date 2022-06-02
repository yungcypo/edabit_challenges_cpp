#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> squarePatch(int n){
    vector<vector<int>> result;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            temp.push_back(n);
        }
        result.push_back(temp);
    }

    return result;
}

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    vector<vector<int>> v;
    v = squarePatch(n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}