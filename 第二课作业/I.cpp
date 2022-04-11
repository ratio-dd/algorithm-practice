//
// Created by ratio on 2022/3/14.
//
//
//#include <iostream>
//using namespace std;
//int main(){
//    char a[20200];
//    cin.getline(a,20200);
//    int len = strlen(a);
//    string min;
//    int minlen = 0;
//    string max;
//    int maxlen = 0;
//    for()
//}
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[205][105];
    char c;
    int w = 0, j = 0;
    while ((c = getchar()) != '\n') {
        if (c != ' ' && c != ',')
            s[w][j++] = c;
        else if (j != 0) {
            s[w][j] = '\0';
            w++;
            j = 0;
        }
    }
    s[w][j] = '\0';
    w++;
    int wordNum = w;
    int maxlen = 0, minlen = 200;
    int max_i, min_i;
    for (int i = 0; i < wordNum; ++i) {
        if (strlen(s[i]) > maxlen) {
            max_i = i;
            maxlen = strlen(s[i]);
        }
        if (strlen(s[i]) < minlen) {
            min_i = i;
            minlen = strlen(s[i]);
        }
    }
    cout << s[max_i] << endl;
    cout << s[min_i] << endl;
    return 0;
}

