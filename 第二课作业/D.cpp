//
// Created by ratio on 2022/3/12.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 0; x < n; x++) {
        string a, b;
        cin >> a;
        cin >> b;
        if (a == "Rock" && b == "Scissors") {
            cout << "Player1"<<endl;
            continue;
        }
        if (a == "Scissors" && b == "Rock") {
            cout << "Player2"<<endl;
            continue;
        }
        if (a == "Paper" && b == "Scissors") {
            cout << "Player2"<<endl;
            continue;
        }
        if (a == "Scissors" && b == "Paper") {
            cout << "Player1"<<endl;
            continue;
        }
        if (a == "Rock" && b == "Paper") {
            cout << "Player2"<<endl;
            continue;
        }
        if (a == "Paper" && b == "Rock") {
            cout << "Player1"<<endl;
            continue;
        }
        if(!a.compare(b)){
            cout << "Tie"<<endl;
            continue;
        }
    }
    return 0;
}