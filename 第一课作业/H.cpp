//
// Created by ratio on 2022/3/5.
//

#include <iostream>
using namespace std;
int main(){
    long t,n,m;
    string result = "unknown";
    cin>>t;
    cin>>n;
    cin>>m;
    if(t*m>=n)
        result = "yes";
    else
        result = "no";
    cout<<result;
    return 0;
}