//
// Created by ratio on 2022/3/5.
//

#include <iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    sum = (n-2)*180;
    int a[n];
    for(int x = 0;x<n-1;x++){
        cin>>a[x];
        sum -=a[x];
    }
    cout<<sum;
    return 0;
}