//
// Created by ratio on 2022/4/1.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class TrieNode { //定义节点
public:
    TrieNode *next[26] = {nullptr};
    int count = 0;

};

class Trie { //定义树
private:
    TrieNode *root;
public:
//    int cnt = 0;

    Trie() {
        root = new TrieNode();
    }

    TrieNode * insert(string word) {
        TrieNode *node = root;
        for (int i = word.length()-1; i >=0; i--) {
            if (node->next[word[i] - 'a'] == nullptr) {
                node->next[word[i] - 'a'] = new TrieNode();
            }
            node->next[word[i] - 'a']->count++;
            node = node->next[word[i] - 'a'];
        }
        return node;
//        node->IsEnd += 1;
    }


//    int startsWith(string prefix) {
//        TrieNode *node = root;
//        for (char i: prefix) {
//            node = node->next[i - 'a'];
//            if (node == nullptr) {
//                return 0;
//            }
//        }
//        pre_order(node);
//        return cnt;
//    }



//    void cntInit(int cnt) {
//        cnt = 0;
//    }

//    void pre_order(TrieNode *node)//前序遍历递归算法
//    {
//        if (node == nullptr)
//            return;
//        if (node->IsEnd > 0) {
//            cnt += node->IsEnd;
//        }
//        for (int i = 0; i < 26; i++) {
//            if (node->next[i] != nullptr) {
//                pre_order(node->next[i]);
//            }
//        }
//    }
};

int main() {
    int Num = 0;
    cin >> Num;
    Trie tree;
//    string s[Num];
    vector<TrieNode *> array;
    for (int i = 0; i < Num; i++) {
        string s;
        cin >> s;
        array.push_back(tree.insert(s));
    }
    for (int i = 0; i < Num; i++) {
        cout << array[i]->count << endl;
    }
}