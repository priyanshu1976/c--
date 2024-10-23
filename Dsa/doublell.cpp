#include <bits/stdc++.h>
using namespace std;

class Node{
    public : 
    int val;
    Node* next;
    Node* prev;

    Node() : next(nullptr) , prev(nullptr){}
    Node(int x) : next(nullptr) , prev(nullptr){
        val = x;
    }
};

class dll{
    Node* head = nullptr;
    Node* tail = nullptr;
    int size;

    public:

        void insertatlast(int x){
            if(head == nullptr){
                head = new Node(x);
                head->prev=  nullptr;
                head->next= nullptr;
                tail = head;
            }
            else{
                Node* temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }
                temp->next = new Node(x);
                Node* t2 = temp;
                temp = temp->next;
                temp->prev = t2;
                temp->next = nullptr;
                tail = temp; 

            }
            size++;
        }
        void display(){
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->val << "-->";
                temp = temp->next;
                if(temp == nullptr) cout << "null";
            }
        }

        void insertathead(int x){
            if(head == nullptr){
                head = new Node(x);
                head->next= nullptr;
                head->prev = nullptr;
                tail = head;
                size++;
                return;
            }
            Node* temp = new Node(x);
            temp->prev = nullptr;
            temp->next = head;
            head = temp;
            size++;
            
        }

        void insertatindex(int index, int val) {
    if (index < 0 || index > size) {
        cout << "Invalid index" << endl;
        return;
    }

    // Case for inserting at index 0 (at the head)
    if (index == 0) {
        insertathead(val); // Use the already defined insertathead function
        return;
    }

    // Case for inserting at the end
    if (index == size) {
        insertatlast(val); // Use the already defined insertatlast function
        return;
    }

    // Traverse the list to find the node at position index - 1
    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }

    // Now temp is the node just before the index where we want to insert
    Node* nextNode = temp->next;
    Node* newNode = new Node(val);

    // Link the new node
    newNode->next = nextNode;
    newNode->prev = temp;
    temp->next = newNode;

    if (nextNode != nullptr) {
        nextNode->prev = newNode;
    }

    size++;
}



};

int main() {
    cout << "hello world" << endl;
    dll pp;
    pp.insertatlast(5);
    pp.insertatlast(4);
    pp.insertatlast(3);
    pp.insertatlast(2);
    pp.insertatlast(1);
    pp.insertathead(6);
    pp.insertatindex(2 , 100);
    pp.display();
    return 0;
}