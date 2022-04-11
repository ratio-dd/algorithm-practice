//
// Created by ratio on 2022/4/5.
//

#include <iostream>

using namespace std;

int main() {
    int high, up, down;
    cin >> high >> up >> down;
    int total = 0, cnt = 0;
    while (cnt <= 1000) {

        total += up;
        if (total >= high) {
            cnt++;
            break;
        }
        total -= down;
        cnt++;
    }
    cout << cnt;
}
