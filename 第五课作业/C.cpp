//
// Created by ratio on 2022/4/2.
//

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int i, j, lena, lenb, lenc;
    char sa[210], sb[210];
    vector<int> a(210, 0), b(210, 0), c(420, 0);

    //处理输入
    cin >> sa >> sb;
    lena = strlen(sa);
    lenb = strlen(sb);

    //逆序存储 各位左对齐
    for (int i = 0; i < lena; i++) {
        a[i] = sa[lena - 1 - i] - '0';
    }
    for (int i = 0; i < lenb; i++) {
        b[i] = sb[lenb - 1 - i] - '0';
    }

    //乘法
    for (i = 0; i < lena; i++) {
        for (j = 0; j < lenb; j++) {
            c[i + j] += a[i] * b[j];
        }
    }

    //处理进位
    lenc = lena + lenb;
    for (i = 0; i < lenc; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }

    //去掉高位0
    while (c[lenc] == 0 && lenc > 0) {
        lenc--;
    }

    //输出
    for (i = lenc; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}