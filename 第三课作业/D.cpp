#include <iostream>

using namespace std;

int main() {
    int x, y, z, minV = 1e5;
    for (x = 1; x <= 222; x++) {
        for (y = 1; y <= 188; y++) {
            for (z = 1; z <= 144; z++) {
                if ((11 * x + 13 * y + 17 * z == 2471) && (13 * x + 17 * y + 11 * z == 2739) && (x + y + z) < minV)
                    minV = x + y + z;
            }
        }
    }
    cout<<minV<<endl;
    return 0;
}
