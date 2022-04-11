//
// Created by ratio on 2022/4/2.
//大整数除法

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

//TODO:引用类型 &a
int isDivision(vector<int> &a, int &k, int &lena) {
    int yu = 0, i, c[40];
    for (i = 0; i < lena; i++) {
        c[i] = (yu * 10 + a[i]) / k;
        yu = (yu * 10 + a[i]) % k;
    }
    return yu;
}

int main() {
    int i, k, lena, cnt = 0;
    char s[40];
    vector<int> a(40, 0);

    //处理输入
    cin >> s;
    lena = strlen(s);

    for (i = 0; i < lena; i++) {
        a[i] = s[i] - '0';
    }

    for (k = 2; k <= 9; k++) {
        if (isDivision(a, k, lena) == 0) {
            cnt++;
            cout << k << " ";
        }
    }
    if (cnt == 0) {
        cout << "none";
    }
    return 0;
}