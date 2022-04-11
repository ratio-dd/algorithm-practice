//
// Created by ratio on 2022/3/19.
//

#include <iostream>

using namespace std;

int main() {
    int x, y, z, n, count = 0;
    cin >> n;
    for (x = 0; x <= (n / 5); x++) {
        for (y = 0; y <= (n / 3); y++) {
            for (z = 0; z <= n; z += 3)
            {
                if (((x + y + z) == n) && (5 * x + 3 * y + z / 3 == n)) {
                    cout << x << " " << y << " " << z << endl;
                    count++;
                }
            }
        }
    }
    if (!count)
    {
        cout << "No Answer." << endl;
    }
    return 0;
}