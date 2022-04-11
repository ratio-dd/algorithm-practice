//
// Created by ratio on 2022/3/12.
//

#include <iostream>
using namespace std;
int main() {
    char a[256];
    int count = 0;
    string temp;
    getline(cin, temp);
    for (int x = 0; x < temp.length(); x++)
        a[x] = temp[x];
    for (int x = 0; x < temp.length(); x++) {
        if (a[x] >= '0' && a[x] <= '9') {
            count++;
        }
    }
    cout << count;
}