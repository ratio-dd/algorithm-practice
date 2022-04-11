//
// Created by ratio on 2022/3/12.
//

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    char a[100000];
//    cin >> a;
//    int len = strlen(a);
//    int t = 0;
//    for (int x = 0; x < len; x++) {
//        for (int j = 0; j < len; j++)
//            if (a[x] == a[j])t++;
//        if (t==1) {
//            cout << a[x];
//            return 0;
//        }
//    }
//    cout<<"no";
//    return 0;
//}

//时间复杂度太高了
// 开一个int arr[26] 对应26个字母
// 全部初始化为-1遍历字符串
// 对于下标i位置的字符c
// arr[c - 'a'] = arr[c - 'a'] == -1 ? i : -2;
// 然后只要输出arr里最小的自然数（最前的下标）对应的字母就行
// 如果都是负数就是no
// O(n)时间+O(1)额外空间 int[26]是常数级的
//
//        作者：三河猫
//        链接：https://www.zhihu.com/question/37342074/answer/71861085
//来源：知乎
//        著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int arr[27] = {0};
    int flag = 0;
    char a[100000];
    cin >> a;
    int len = strlen(a);
    for (int x = 0; x < len; x++) {
        arr[a[x] - 'a']++;
    }
    for(int i=0; i<len ; i++)
    {
        if(arr[a[i]-'a']==1)
        {
            cout<<a[i];
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"no";
    return 0;
}
