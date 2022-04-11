//
// Created by ratio on 2022/3/5.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x,y[10000];
    long sum=0;
    double avrr;
    cin>>x;
    for(int a = 0;a<x;a++){
        cin>>y[a];
        sum +=y[a];
    }
    avrr = 1.0*sum/x;
    cout<<sum<<" ";
    cout<<setiosflags(ios::fixed)<<setprecision(5)<<avrr;
    return 0;
}