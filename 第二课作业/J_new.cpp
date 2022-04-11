//
// Created by ratio on 2022/3/22.
//

#include <iostream>
#include <cstring>

using namespace std;


struct TrieNode {
    bool IsEnd;                //判断是否是单词
    bool IsEmp;
    TrieNode *next[10];

    TrieNode();
};

TrieNode::TrieNode() : IsEnd(false)   //初始化
{
    IsEnd = false;
    IsEmp = true;
    memset(next, NULL, sizeof(next));
}

class Trie {
private:
    TrieNode *root;
public:
    int EndNum = 0;

    Trie() {
        root = new TrieNode();
    }

    TrieNode * insert(string word) {
        TrieNode *node = root;
        for (int i = 0; i < word.length(); i++) {

            if (node->IsEnd) {
                node->IsEnd = false;
                EndNum--;
            }
            if (node->next[word[i] - '0'] == nullptr) {
                node->next[word[i] - '0'] = new TrieNode();
                node->IsEmp = false;
            }
            node = node->next[word[i] - '0'];
        }
        if (node->IsEmp == false) {
            EndNum--;
        }
        if (node->IsEnd == false && node->IsEmp == true) {
            node->IsEnd = true;
            EndNum++;
        }
    }

};

int main() {

//    int len = 0, times = 0;
    int times = 0;
    cin >> times;
    while (times--) {
        Trie tree_root;
        int n = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            tree_root.insert(s);
        }
        if (tree_root.EndNum < n) {
            cout << "NO" << endl;
        } else cout << "YES" << endl;
    }
    return 0;
}