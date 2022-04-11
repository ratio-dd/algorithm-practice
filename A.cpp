//
// Created by ratio on 2022/4/5.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string t1, t2;
    cin >> t1 >> t2;
    int a, b;
//    int cnt = 0;
    a = t1[0]*36000 +t1[1] *3600+t1[3]*600 +t1[4]*60 +t1[6]*10 +t1[7];
    b = t2[0]*36000 +t2[1] *3600+t2[3]*600 +t2[4]*60 +t2[6]*10 +t2[7];
    cout<<a-b;
}