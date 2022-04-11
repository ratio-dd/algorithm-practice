//
// Created by ratio on 2022/3/5.
//

//#include <iostream>
//using namespace std;
//int main(){
//    int m,k;
//    cin >> m;
//    cin >> k;
//    if(m%19==0){
//        if(m>=10000){
//            int a[5],count;
//            a[4] = m/10000;
//            a[3] = m / 1000 - a[4] * 10;
//            a[2] = m%1000-a[0]-a[1]*10;
//            a[0] = m%10;
//            a[1] = m%100-a[0];
//            for(int x = 0;x<5;x++){
//                if(a[x]==3) count++;
//            }
//            if(count == m)
//                cout<<"YES";
//            else
//                cout<<"NO";
//        }
//        else if ()
//    } else
//        cout<<"NO";
//}
#include<iostream>
using namespace std;
int main()
{
    int m, k, n, b, i;
    cin >> m >> k;
    n = m;
    i = 0;
    while (n>=1)
    {
        b = n % 10;
        if (b==3)
        {
            i++;
        }
        n /= 10;
    }
    if (m % 19 == 0 && i == k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
