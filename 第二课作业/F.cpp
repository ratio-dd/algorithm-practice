//
// Created by ratio on 2022/3/12.
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string a;
//    while (getline(cin, a)) {
//        int pos = a.find("you");
//        cout << a.replace(pos, 3, "we") << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s, s1, s2;
//    char s[1010];
//    string s1, s2;
    s1 = "you";
    s2 = "we";
    int sign;
    while (getline(cin, s)) {
        sign = s.find(s1, 0);
        while (sign != string::npos) {
            s.replace(sign, 3, s2);
            sign = s.find(s1, sign + 1);
        }
        cout << s << endl;
    }
    return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//using namespace std;
//char str[1010];
//int main()
//{
//    int i;
//    int len;
//    while(cin.getline(str,1010))
//    {
//        len=strlen(str);
//        for(i=0;i<len;i++)
//        {
//            if(i+2<len&&str[i]=='y'&&str[i+1]=='o'&&str[i+2]=='u')
//            {
//                printf("we");
//                i+=2;
//                continue;
//            }
//            printf("%c",str[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
