//
// Created by ratio on 2022/4/6.
//

//#include <iostream>
//
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int inp, a[100];
//    int l = 0;
//    scanf("%d",inp);
//    if (inp % 2 == 1) {
//        cout << "-1" << endl;
//        return 0;
//    }
//    while (inp > 0) {
//        a[l] = inp % 2;
//        l++;
//        inp /= 2;
//    }
//    for (int i = l - 1; i >= 0; i--) {
//        if (a[i])cout<<pow(2, i);
//        if (i != 1 && i != 0)cout << " ";
//    }
//    return 0;
//}


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, g[100], l = 0;
    scanf("%d", &n);
    if (n % 2 == 1) {
        printf("-1"); // 当n为奇数是直接输出-1
        return 0;
    }
    while (n > 0) {
        g[l] = n % 2; // 把n转换成二进制
        l++; // 统计二进制n的长度
        n /= 2;
    }
    for (int i = l - 1; i > 0; i--)
        if (g[i]) printf("%d ", (int) pow(2, i)); // 输出2的每位二进制的幂
    return 0;
}