//
// Created by ratio on 2022/4/4.
//学长写的实现方式

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;


struct TrieNode {
    int Num;
    TrieNode *next[26];

    TrieNode();
};

TrieNode::TrieNode()
{
    Num=0;
    memset(next, NULL, sizeof(next));
}

class Trie {
private:
    TrieNode *root;
public:
    Trie() {
        root = new TrieNode();
    }

    TrieNode *insert(string word) {
        TrieNode *node = root;
        for (int i = word.length()-1 ; i>=0; i--) {

            if (node->next[word[i] - 'a'] == nullptr) {
                node->next[word[i] - 'a'] = new TrieNode();

            }
            node->next[word[i]-'a']->Num ++;
            node = node->next[word[i] - 'a'];
        }
        return node;
    }

};


int main() {

    string  s;
    Trie tree_root;
    int len;
    cin >> len;
    vector<TrieNode*> array;

    for(int i =0 ; i < len ; i++){
        cin >> s;
        array.push_back(tree_root.insert(s));

    }
    for(int i =0 ; i < len ; i++){

        cout << array[i]->Num<<endl;
    }



    return 0;
}