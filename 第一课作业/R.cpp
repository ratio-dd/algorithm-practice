//
// Created by ratio on 2022/3/6.
//

#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int b[n];
   for(int x=0;x<n;x++){
       cin>>b[n-x-1];
   }
   for(int x = 0;x < n;x++){
       cout<<b[x];
       if(x == n-1){}
       else
           cout<<" ";
   }
}
