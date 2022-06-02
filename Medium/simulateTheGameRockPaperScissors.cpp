#include <iostream>
using namespace std;

string rps(string p1, string p2){
    if(p1 == "rock" || p1 == "r"){
        if(p2 == "paper" || p2 == "p"){
            return "P2 wins";
        } else if (p2 == "scissors" || p2 == "s"){
            return "P1 wins";
        } else if (p2 == "rock" || p2 == "r"){
            return "Tie";
        }
    } else if (p1 == "paper" || p1 == "p"){
        if(p2 == "rock" || p2 == "r"){
            return "P1 wins";
        } else if (p2 == "scissors" || p2 == "s"){
            return "P2 wins";
        } else if (p2 == "paper" || p2 == "p"){
            return "Tie";
        }
    } else if (p1 == "scissors" || p1 == "s"){
        if(p2 == "rock" || p2 == "r"){
            return "P2 wins";
        } else if (p2 == "paper" || p2 == "p"){
            return "P1 wins";
        } else if (p2 == "scissors" || p2 == "s"){
            return "Tie";
        }
    }
    return "Invalid input";
}


int main(){

    string p1, p2;

    cout << "Enter 0 to exit..." << endl;

    while(true){
        cout << "P1 turn: ";
        cin >> p1;

        cout << "P2 turn: ";
        cin >> p2;

        if(p1 == "0" || p2 == "0"){
            break;
        }
        
        cout << endl << rps(p1, p2) << endl << endl;
    }


    return 0;

}