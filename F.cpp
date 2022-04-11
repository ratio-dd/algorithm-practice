#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;
    vector<int> light(n + 1, 1);
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (j % i == 0) {
                light[j] = !light[j];
            }
        }
    }
    cout << 1;
    for (i = 2; i <= n; i++) {
        if (light[i] == 0) { cout << "," << i; }
    }
    return 0;
}
