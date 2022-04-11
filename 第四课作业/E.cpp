//
// Created by ratio on 2022/3/26.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int i, cnt = 0, light[1001];
    memset(light, 0, sizeof(light)); //0:亮， 1:灭
    for (i = 1; i <= 1000; i++) {
        if (i % 3 == 0) {
            light[i] = !light[i]; //0->1, 1->0
        }
    }
    for (i = 1; i <= 1000; i++) {
        if (i % 5 == 0) {
            light[i] = !light[i]; //0->1, 1->0
        }
    }
    for (i = 1; i <= 1000; i++) {
        if (i % 7 == 0) {
            light[i] = !light[i]; //0->1, 1->0
        }
    }

    for (i = 1; i <= 1000; i++) {
        if (light[i] == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}