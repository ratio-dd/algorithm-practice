//
// Created by ratio on 2022/3/6.
//



//通过map实现
// #include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//    unordered_map<int, int> map;
//    int len, temp,count=0;
//    unordered_map<int, int> hashmap;
//    cin >> len;
//    for (int x = 0; x < len; x++) {
//        cin >> temp;
//        if (map.find(temp) == map.end()) {
//            map.insert(pair<int, int>(temp, x));
//            count++;
//            hashmap.insert(pair<int,int>(count,temp));
//        }
//    }
//
//    //遍历map
//    unordered_map<int, int>::iterator iter;
//    for (iter = hashmap.begin(); iter != hashmap.end(); iter++)cout << iter->second << " ";
//}
//

#include <iostream>

using namespace std;

int main() {
    int len, m = 0;
    cin >> len;
    int a[len], tmp[len];
    for (int i = 0; i < len; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < len; i++) {
        int j = 0;
        for (; j < m; j++) {
            if (a[i] == tmp[j])
                break;
        }
        if (j == m) {
            tmp[m] = a[i];
            m++;
        }
    }
    for (; m > 0; m--) {
        cout << tmp[m-1];
        if (m != 0)cout << " ";
    }
}