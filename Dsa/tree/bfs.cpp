#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* right;
    Node* left;

    Node() {}
    Node(int x) : val(x), right(nullptr), left(nullptr) {}
};



int main() {
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->right->left = new Node(8);
    root->right->right = new Node(9);

    queue<Node*> que;
    vector<vector<int>> ans;
    que.push(root);
    while(!que.empty()){
        int size = que.size();
        vector<int> temp;
        for(int i = 0 ; i < size ; i ++){
            que.push(que.front()->left);
            que.push(que.front()->right);
            temp.push_back(que.front()->val);
            que.pop();
        }
        ans.push_back(temp);
    }

    cout << "hello world" << endl;
    return 0;
}