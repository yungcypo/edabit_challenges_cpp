#include <iostream>
using namespace std;

int wormLenght(string worm){
    int result;
    for(int i = 0; i < worm.length(); i++){
        if(worm[i] == '-'){
            result += 10;
        } else {
            return -1;
        }
    }
    return result;
}

int main(){
    string worm;

    cout << "Enter a worm: ";
    cin >> worm;

    int lenght = wormLenght(worm);

    if(lenght > 0){
        cout << "Your worm has " << lenght << " mm";
    } else {
        cout << "Invalid input...";
    }

    return 0;

}