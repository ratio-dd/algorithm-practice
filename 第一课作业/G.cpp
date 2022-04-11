//
// Created by ratio on 2022/3/5.
//

#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>=b&&a>=c)
        max = a;
    else if(b>=a&&b>=c)
        max = b;
    else
        max = c;
    cout<<max;
    return 0;
}