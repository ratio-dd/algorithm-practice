//
// Created by ratio on 2022/4/2.
//减法

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int i, j, lena, lenb, lenc, jw;
    char sa[200], sb[200];
    vector<int> a(200, 0), b(200, 0), c(200, 0);

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

    for (int m = lenb + 1; m <= lena; m++)  //将减数数组b补0补足位
    {
        b[m] = 0;
    }
//    if (lena > lenb)lenc = lena;
//    else lenc = lenb;

    lenc = lena;
    jw = 0;

    for (i = 0; i <= lenc; i++) {
        c[i] = a[i] - b[i] - jw;
        if (c[i] < 0) {
            jw = 1;
            c[i] += 10;
        } else
            jw = 0;
//        c[i] = (a[i] + b[i] + jw) % 10;
//        jw = (a[i] + b[i] + jw) / 10;

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