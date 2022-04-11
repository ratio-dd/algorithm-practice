//
// Created by ratio on 2022/3/6.
//
//讨巧使用了bitset库，这样可以直接进行二进制十进制转换

//#include <iostream>
//#include <bitset>
//using namespace std;
//int main(){
//    bitset<32>input;
//    cin>>input;
//    cin>>input;
//    cout<<input.to_ulong();
//    return 0;
//}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, trans = 0;
    cin >> x;
    char y[x];
    for (int n = 0; n < x; n++) {
        cin >> y[n];
    }
    for (int n = 0; n < x; n++) {
        int temp;
        if (y[x - 1 - n] == 48)temp = 0;
        if (y[x - 1 - n] == 49)temp = 1;
        trans += temp * pow(2, n);
    }
    cout << trans;
}

