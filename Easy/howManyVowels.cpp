#include <iostream>
using namespace std;


// a, e, i, o, u are considered vowels (not y)
int countVowels(string str){
    int result;
    
    for(int i = 0; i < str.length(); i++){
        switch (str[i])
        {
        case 'a':
            result++;
            break;
        case 'e':
            result++;
            break;
        case 'i':
            result++;
            break;
        case 'o':
            result++;
            break;
        case 'u':
            result++;
            break;
        
        default:
            break;
        }
    }

    return result;
}

int main(){
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << countVowels(str);

    return 0;

}