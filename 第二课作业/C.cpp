//
// Created by ratio on 2022/3/12.
//

#include <iostream>

using namespace std;

bool compare(const string &x, const string &y) {
    string::const_iterator p = x.begin();
    string::const_iterator q = y.begin();
    while (p != x.end() && q != y.end() && toupper(*p) == toupper(*q)) {
        ++p;
        ++q;
    }
    if (p == x.end()) {
        return (q == y.end());
    }
    if (q == y.end()) {
        return false;
    }
    return false;
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    if (a.length() != b.length()) {
        cout << 1;
        return 0;
    } else {
        if (a.compare(b) == 0) {
            cout << 2;
            return 0;
        }
        if (compare(a, b)) {
            cout << 3;
            return 0;
        } else {
            cout << 4;
            return 0;
        }

    }
}
