//
// Created by ratio on 2022/3/6.
//

#include <iostream>

using namespace std;

int main() {
    int x, sum = 0, count = 1;
    for (int a = 0; a < 9; a++) {
        cin >> x;
        if (count == 3 || count == 5 || count == 7) {
            sum += x;
        }
        count++;
    }
    cout << sum;
}
