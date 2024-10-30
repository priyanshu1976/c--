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

// Updated preorder function to take a pointer to Node
void preorder(Node* root) {
    if (root == nullptr) return; // Check if pointer is null
    preorder(root->left); // Recursively call with left child
    preorder(root->right); // Recursively call with right child
    cout << root->val << " "; // Use '->' to access value via pointer
}

int main() {
    cout << "hello world" << endl;

    // Declare pointers and use 'new' for dynamic memory allocation
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    // Call preorder traversal
    preorder(root);

    return 0;
}
