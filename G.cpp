//
// Created by ratio on 2022/4/5.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string trans(int x) {
    string res;
    bool flag = false;
    if (x == 0) {
        res = "0";
        return res;
    }
    if (x < 0) {
        x = -x;
        flag = true;
    }
    while (x != 0) {
        int tmp = x % 2;
        res += to_string(tmp);
        x /= 2;
    }
    reverse(res.begin(), res.end());
    if (flag) {
        res = "-" + res;
    }
    return res;
}


int main() {
    int a[5];
    for (int x = 0; x < 5; x++) {
        cin >> a[x];
    }
    for (int x = 0; x < 5; x++) {
        cout << a[x] << "-->";
        string res = trans(a[x]);
        cout << res << endl;
    }
}