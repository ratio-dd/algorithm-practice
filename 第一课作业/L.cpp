//
// Created by ratio on 2022/3/5.
//

//"多组测试 可以这么写 while(cin >> x) {....}"
#include <iostream>
using namespace std;
int main() {
    int x, y;
    while(cin >> x){
        if(x <= 10){
            y = x*6;
        }
        else if(x<=20){
            y = 60 + (x-10)*2;
        }
        else if(x<=40){
            y = 80 + (x-20)*1;
        }
        else
            y = 100;
        cout<<y<<endl;

    }
    return 0;
}