//
// Created by ratio on 2022/3/6.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string temp;
    cin>>temp;
    int len = temp.length();
    char a[len];
    bool b1 = false,b2 = false,b3 = false,b4 = false,b5 = false;
    for (int i = 0; i < len; i++) {
        a[i] = temp[i];
        if(a[i]>='a'&&a[i]<='z')b3 = true;
        if(a[i]>='0'&&a[i]<='9')b4 = true;
        if(a[i]=='~'||a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='.') b5 = true;
    }
    if(len>=8&&len<=16) b1 = true;
    if(a[0] >='A'&&a[0]<='Z') b2 = true;
    if(b1&&b2&&b3&&b4&&b5)cout<<"Yes";
    else cout<<"No";
}
