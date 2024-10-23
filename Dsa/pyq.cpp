#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int x) : next(nullptr) {
        val = x;
    }
};

int main() {
    cout << "hello world" << endl;
    Node* head = new Node(1);
    Node* temp = head;
    for(int i = 1 ; i < 4;i++){
        temp->next = new Node(i);
        temp = temp->next;
    }
    temp = head;
    while(temp->next != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    temp->next = head;

    return 0;
}