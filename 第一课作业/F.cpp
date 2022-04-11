//
// Created by ratio on 2022/3/5.
//


#include <iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    if (age < 8)
        cout << "You are too young!";
    else if (age <= 12)
        cout << "Welcome to Junior Class!";
    else if (age <= 18)
        cout << "Welcome to Senior Class!";
    else if (age > 18)
        cout << "You are too old!";
    return 0;
}