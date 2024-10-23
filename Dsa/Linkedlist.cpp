#include <bits/stdc++.h>
using namespace std;

class Node{

    public :
    int val; 
    Node* next;

    Node() : next(nullptr) {}
    Node(int x) : next(nullptr) {
        val = x;
    }
};

class LL{
    int size = 0 ; 
    Node* tail;

    public :
    Node* head;
    LL(){
        cout << "made" << endl;
        head = nullptr;
        tail = nullptr;
    }



    void insertathead(int x){
        if(head == nullptr){
            head = new Node(x);
            head->next = nullptr;
            size++;
            tail = head;
        cout << "sucessfully insert" << x << endl;
        }
        else{
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
        }
    }

    void insertatend(int x){
        if(head == nullptr){
            head = new Node(x);
            tail = head;
        }
        else{
            tail->next = new Node(x);
            tail = tail->next;
            tail->next = nullptr;
            size++;
        }
        
    }

    void insertatindex(int index , int val){
        if(index > size){
            cout << "false" << endl;
            return;
        }
        Node* temp = head;
        for(int i = 0 ; i < index ;i++){
            temp = temp->next;
        }
        Node* t2 = temp->next;
        temp->next = new Node(val);
        temp = temp->next;
        temp->next = t2;
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->val << "-->";
            temp = temp->next;
            if(temp == nullptr) cout << "null";
        }
        cout << endl;
    }

    void deleteathead(){
        head = head->next;
    }
    void deleteattail(){
        Node* temp = head;
        while(temp->next != tail){
            temp= temp->next;
        }
        temp->next = nullptr;
        tail = temp;
    }
};

void reverse(LL& list) {
    Node* prev = nullptr;
    Node* current = list.head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the current node's pointer
        prev = current;       // Move pointers one position ahead
        current = next;
    }

    list.head = prev; // Update the head of the list to the new front
}

int main() {
    cout << "hello world" << endl;
    LL s;
    s.insertatend(1);
    s.insertatend(2);
    s.insertatend(3);
    s.insertatend(4);
    s.insertatend(5);
    s.display();
    reverse(s);
    s.display();
    return 0;
}