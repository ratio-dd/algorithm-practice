
//
// Created by ratio on 2022/4/5.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+') {
        cout << a + b;
    }
    if (c == '-') {
        cout << a - b;
    }
    if (c == '*') {
        cout << a * b;
    }
    if (c == '/') {
        if (b == 0) {
            cout << "Divided by zero!";
        } else {
            cout << a / b;
        }
    }
    if ((c != '+') && (c != '-') && (c != '*') && (c != '/')) {
        cout << "Invalid operator!";
    }
}