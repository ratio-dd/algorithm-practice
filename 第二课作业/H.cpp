//
// Created by ratio on 2022/3/13.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    for (int x = 0; x < len; x++) {
        char temp = a[x];
        if (temp == 'A') {
            a[x] = 'T';
        }
        if (temp == 'T') {
            a[x] = 'A';
        }
        if (temp == 'G') {
            a[x] = 'C';
        }
        if (temp == 'C') {
            a[x] = 'G';
        }
    }
    cout << a;
    return 0;
}