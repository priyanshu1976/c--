#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[], int size , int target) {
    if(size < 0) return false;
    else if(arr[size] == target) return true;
    return false || linearsearch(arr , size - 1, target);

}

vector<int> allIndex(int arr[] , int size , int target ){
    vector<int> result;
    if(size < 0) return result;
    else if(arr[size] == target){
        result.push_back(size);
        vector<int> temp = allIndex(arr , size-1, target);
        result.insert(result.end(), temp.begin(), temp.end());
    }
    else{
        vector<int> temp = allIndex(arr , size-1, target);
        result.insert(result.end(), temp.begin(), temp.end());
    }
    return result;
}

void patter(int r , int c){
    if(r == 0) return;
    if(c < r){
        patter(r , c+1);
        cout << "* ";
    }
    else{
        patter(r-1 , 0);
        cout << endl;
    }
}
void bubble(int arr[] , int r , int c){
    if(r == 0) return;
    if(c < r){
        if(arr[c] > arr[c+1]){
            int temp = arr[c] ;
            arr[c] = arr[c+1];
            arr[c+1] = temp; // Corrected the swap operation
        }
        bubble(arr ,r , c+1);
    }
    else{
        bubble(arr ,r-1 , 0);
    }
}
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

void sub(string p , string up , vector<string>& ans){
    if(up == ""){
        p == "" ? ans.push_back("empty str"): ans.push_back(p);
        return;
    }
    sub(p + up[0], up.substr(1), ans);
    sub(p , up.substr(1), ans);
}

void helper( vector<int> p, vector<int> up , vector<vector<int>>& ans){
    if(up.size() == 0){
        ans.push_back(p);
        return;
    }
    vector<int> p1 = p;
    p1.push_back(up[0]);
    up.erase(up.begin());

    helper(p1, up, ans);
    helper(p, up, ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(temp , nums, ans);
        return ans;
        
}

void param(int o , int c , string temp , vector<string>& ans){
    if(o < 0 || c < 0 ) return;
    if( o == 0 and c == 0){
        ans.push_back(temp);
        return;
    }
    param(o-1 , c , temp + "(" , ans);
    param(o , c-1 , temp + ")" , ans);
    
}
bool isValidParentheses(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(') {
            stk.push(c);
        } else if (c == ')') {
            if (stk.empty() || stk.top() != '(') {
                return false; // Unmatched closing parenthesis
            }
            stk.pop();
        }
    }
    return stk.empty(); // Check if all opening parentheses are matched
}


vector<string> generateParenthesis(int n) {
        string temp;
        vector<string> ans;
        vector<string> ans2;
        param(n,n,temp,ans);
        for(string temp : ans){
            if(isValidParentheses(temp)){
                ans2.push_back(temp);
            }
        }
        return ans2;
}

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    
    vector<int> left;
    vector<int> right;
    void leftTree(TreeNode* root){
        if(root == nullptr) left.push_back(-1);
        leftTree(root->left);
        left.push_back(root->val);
        leftTree(root->right);
    }
    void rightTree(TreeNode* root){
        if(root == nullptr) right.push_back(-1);
        rightTree(root->right);
        right.push_back(root->val);
        rightTree(root->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        leftTree(root->left);
        rightTree(root->right);
        cout << "Left Tree: ";
        for (int i = 0; i < left.size(); i++) {
            cout << left[i] << " ";
        }
        cout << endl;
        cout << "Right Tree: ";
        for (int i = 0; i < right.size(); i++) {
            cout << right[i] << " ";
        }
        cout << endl;
        return left == right;
    }
};


int main() {
    cout << "hello world" << endl;
    vector<string> ans = generateParenthesis(3);
    cout << "Generated Parentheses:" << endl;
    for (const auto& parentheses : ans) {
        cout << parentheses << endl;
    }
    return 0;
}