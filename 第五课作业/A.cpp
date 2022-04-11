#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int i, j, lena, lenb, lenc, jw;
    char sa[1000], sb[1000];
    vector<int> a(1000, 0), b(1000, 0), c(1000, 0);

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

    if (lena > lenb)lenc = lena;
    else lenc = lenb;

    jw = 0;

    for (i = 0; i <= lenc; i++) {
        c[i] = (a[i] + b[i] + jw) % 10;
        jw = (a[i] + b[i] + jw) / 10;

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