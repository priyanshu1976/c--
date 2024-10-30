// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//   Node* left;
//   Node* right;
//   int data;

//   Node(int d) {
//     data = d;
//     left = nullptr;
//     right = nullptr;
//   }
// };

// class BinaryTree {
//   Node* root;

// public:
//   BinaryTree() {
//     root = nullptr;
//   }

//   // Insert function with reference to pointer to modify the actual node
//   void insert(Node*& temp, int data) {
//     if (temp == nullptr) {
//       temp = new Node(data);
//       return;
//     }
//     if (data > temp->data) {
//       insert(temp->right, data);
//     } else {
//       insert(temp->left, data);
//     }
//   }

//   // Public insert function to call the private insert with root
//   void insert(int data) {
//     insert(root, data);
//   }

//   // Insert multiple elements from a vector
//   void insertThroughVector(vector<int> v) {
//     for (int i = 0; i < v.size(); i++) {
//       insert(v[i]);
//     }
//   }

//   // Display function for preorder traversal
//   void display(Node* temp) {
//     if (temp == nullptr) {
//       return;
//     }
//     cout << temp->data << " ";
//     display(temp->left);
//     display(temp->right);
//   }

//   // Public function to display the tree starting from the root
//   void displayTree() {
//     display(root);
//   }
// };

// int main() {
//   vector<int> arr = {2, 5, 4, 3, 6};
//   BinaryTree tree;
//   tree.insertThroughVector(arr);
//   tree.displayTree();

//   return 0;
// }
