
// Created by ratio on 2022/4/5.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char mine[n + 2][m + 2];
    for (int x = 0; x < n + 2; x++) {
        for (int j = 0; j < m + 2; j++) {
            mine[x][j] = '0';
        }
    }
    for (int x = 1; x <= n; x++) {
        for (int j = 1; j <= m; j++) {
            cin >> mine[x][j];
        }
    }
    char count = '0';
    for (int x = 1; x < n + 1; x++) {
        for (int j = 1; j < m + 1; j++) {
            if (mine[x][j] != '*') {
                if (mine[x - 1][j] == '*')count++;
                if (mine[x + 1][j] == '*')count++;
                if (mine[x][j + 1] == '*')count++;
                if (mine[x][j - 1] == '*')count++;
                if (mine[x + 1][j + 1] == '*')count++;
                if (mine[x + 1][j - 1] == '*')count++;
                if (mine[x - 1][j + 1] == '*')count++;
                if (mine[x - 1][j - 1] == '*')count++;
                mine[x][j] = count;
                count = '0';
            }
        }
    }

    //输出结果
    for (int x = 1; x < n + 1; x++) {
        for (int j = 1; j < m + 1; j++) {
            cout << mine[x][j];
        }
        cout << endl;
    }
}