//
// Created by ratio on 2022/3/12.
//

#include <iostream>
using namespace std;
int main(){
   char s[1000];
   cin.getline(s,1000);
   char *p = s;
   while (*p !='\0')p++;
   cout << (p-s) <<endl;
   return 0;
}