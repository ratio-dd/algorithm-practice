//
// Created by ratio on 2022/3/5.
//

#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%3==0){
        x /= 3;
    }
    else{
        x = x/3 + 1;
    }
    cout<<x;
    return 0;
}