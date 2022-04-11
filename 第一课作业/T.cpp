//
// Created by ratio on 2022/3/6.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, count = 0;
    cin >> a >> b;
    int c[b];
    for (int x = 0; x < b; x++) {
        cin >> c[x];
        if (a > c[x]) {
            count++;
        }
    }
    cout << count;
    return 0;
}
