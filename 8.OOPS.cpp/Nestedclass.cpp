#include <bits/stdc++.h>
using namespace std;



class LL {
    class Node{
    public:
        int val;
        Node* next;
        Node() : next(nullptr) {}
        Node(int val) : val(val) , next(nullptr) {}
        ~Node(){
            cout << "destructor called" << endl;
        }
    };
    Node* head;
    Node* tail;
    public :
    LL() head(nullptr) , tail(nullptr){}
    LL(int value): tail(nullptr) {
        head->val = value;
    }
    void insert() {
        cout << "inset karo ji " << endl;
    }
    void getvalue(){
        cout <<  head->val;
    }

};

int main() {
    cout << "hello world" << endl;
    LL prinsu = new LL(8);
    prinsu.getvalue();

    return 0;
}