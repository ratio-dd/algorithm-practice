//
// Created by ratio on 2022/3/6.
//

#include <iostream>

using namespace std;

int main() {
    long top;
    cin >> top;
    int a = 1, b = 1, c = 0, count = 1;
    while (c <= top) {
        c = a + b;
        a = b;
        b = c;
        count++;
    }
    cout << count << endl << a;
}