//
// Created by ratio on 2022/3/5.
//

#include <iostream>
using namespace std;
int main(){
    long x,y,z,a;
    cin>>x;
    cin>>y;
    cin>>z;
    if (x<=y){
        a = x;
        x = y;
        y = a;
    }
    if (x<=z){
        a = x;
        x = z;
        z = a;
    }
    if (y<=z){
        a = y;
        y = z;
        z = a;
    }
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}