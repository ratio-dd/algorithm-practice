//
// Created by ratio on 2022/3/5.
//

#include <iostream>
using namespace std;
int main(){
    int a,b,count;
//    a = (b/10+b-b/10*10)*2;
//    b = (a/10+a-a/10*10)*3;
    for(a = 10;a<100;a++){
        b = (a/10+a-a/10*10)*3;
        if((a == (b/10+b-b/10*10)*2)&&(b>=10&&b<100)){
            count++;
        }
    }
    cout<<count<<endl;
}