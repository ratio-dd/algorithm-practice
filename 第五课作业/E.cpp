////
//// Created by ratio on 2022/4/2.
////计算2的N次方
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    int i, j, k, lena, lenb, lenc;
//    vector<int> a(30, 0), b(30, 0), c(40, 0);
//
//
//    lenb = 1;
//    a[0] = 1;
//    b[0] = 2;
//    //乘法
//    for (k = 0; k < n; k++) {
//        for (i = 0; i < a.size(); i++) {
//            for (j = 0; j < lenb; j++) {
//                c[i + j] += a[i] * b[j];
//            }
//        }
//    }
//    //处理进位
//    lenc = lena + lenb;
//    for (i = 0; i < lenc; i++) {
//        c[i + 1] += c[i] / 10;
//        c[i] %= 10;
//    }
//
//    //去掉高位0
//    while (c[lenc] == 0 && lenc > 0) {
//        lenc--;
//    }
//
//    //输出
//    for (i = lenc; i >= 0; i--) {
//        cout << c[i];
//    }
//}

#include<iostream>

using namespace std;
int arr[100];

int main() {
    int n, index, i;
    cin >> n;
    index = 0;
    for (i = 0; i < 100; i++) {
        arr[i] = 0;
    }
    arr[0] = 2;
    for (i = 1; i < n; i++) {
        int jinwei = 0;
        for (int j = 0; j <= index; j++) {
            int temp = 1;
            if (j == 0) {
                temp = arr[j] * 2;
                if (temp >= 10) {
                    jinwei = 1;
                }
            } else {
                temp = arr[j] * 2;
                if (jinwei == 1) {
                    temp = temp + 1;
                }
                if (temp >= 10) {
                    jinwei = 1;
                } else {
                    jinwei = 0;
                }
            }
            arr[j] = temp % 10;
        }
        if (jinwei == 1) {
            index++;
            arr[index] = 1;
        }
    }
    for (i = index; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}

