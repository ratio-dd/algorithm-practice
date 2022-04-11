//
// Created by ratio on 2022/3/14.
//


#include <iostream>
#include <cstring>

using namespace std;

class Trie {
private:
    bool isEnd;
    Trie *next[10]{nullptr};
public:
    Trie() {
        isEnd = false;
//        *next = nullptr;
        memset(next, 0, sizeof(next));

    }

    void insert(const string &word) {
        Trie *node = this;
        for (char c: word) {
            if (node->next[c - '0'] == nullptr) {
                node->next[c - '0'] = new Trie();
            }
            node = node->next[c - '0'];
        }
        node->isEnd = true;
    }

    bool search(const string &word) {
        Trie *node = this;
        for (char c: word) {
            node = node->next[c - '0'];
            if (node == nullptr) {
                return false;
            }
        }
        return node->isEnd;
    }

    bool startsWith(const string &prefix) {
        Trie *node = this;
        for (char c: prefix) {
            node = node->next[c - '0'];
            if (node == nullptr) {
                return false;
            }
        }
        return true;
    }

};

int main() {

//    int len = 0, times = 0;
    int times = 0;
    cin >> times;
    int store[400000];
    int x = 0;
    while (cin >> store[x]) {
        x++;
    }
    string strstore[400000];


//    for (int x = 0; x < times; x++) {
//        Trie *trie = new Trie();
//        cin >> len;
//        string store[len];
//        int a, count = 0;
//
//        //将int型改为string型，输入到store数组中
//        while (count < len) {
//            cin >> a;
//            string s = to_string(a);
//            store[count] = s;
//            count++;
//        }
//
//        //建树
//        for (string x: store) {
//            trie->insert(x);
//        }
//        string res = "Yes";
//        for (int x = 0; x < len; x++) {
//            if (trie->startsWith(store[x])) {
//                res = "No";
//                break;
//            }
//        }
//        cout << res << endl;
//    }
    return 0;
}