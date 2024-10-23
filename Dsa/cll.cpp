#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:

public:
    Node* tail;
    Node* head;
    CircularLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert at the end of the circular linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
            tail->next = head;  // Point the last node to the head
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;  // Make it circular
        }
    }

    // Display the circular linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);  // Stop when we circle back to the head
        cout << endl;
    }

    // Delete a node with a specific value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        // If the list contains only one node
        if (head == tail && head->data == value) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return;
        }

        if(head->data == value and head == tail){
            head = nullptr;
            tail = nullptr;
            cout << "chl hya";
        }

        // If the node to be deleted is the head
        if (head->data == value) {
            tail->next = head->next;  // Adjust tail's next to the new head
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Search for the node to delete
        do {
            previous = current;
            current = current->next;
        } while (current != head && current->data != value);

        // If we found the node
        if (current->data == value) {
            previous->next = current->next;

            // If it's the tail node
            if (current == tail) {
                tail = previous;  // Update the tail
            }

            delete current;
        } else {
            cout << "Node with value " << value << " not found" << endl;
        }
    }
    bool contains(int x){
        if(head == nullptr) return false;
        Node* temp = head;
        do{
            if(temp->data == x) return true;
            temp = temp->next;
        } while(temp != head) ;
        return false;

    }

    // Check if the circular linked list is empty
    bool isEmpty() {
        return head == nullptr;
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

    bool empty(){
        return head == nullptr;
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
            cout << temp->data << "-->";
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


int main() {
    LL pp;
    pp.insertatend(5);
    pp.insertatend(3);
    pp.insertatend(4);
    pp.insertatend(2);
    pp.insertatend(4);
    cout << "your fcfs LL is\n" ;
    pp.display();
    cout << "time quanta:" << 1 << endl;
    CircularLinkedList list;
    while(!pp.empty() || !list.isEmpty()){
        if(pp.head != nullptr){
        list.insert(pp.head->data);
        cout << "new process inserted successfully with burst time:" << pp.head->data << endl; 
        pp.head = pp.head->next;
        }
        Node* temp = list.head;
        cout << "list before onecycle" <<endl;
        list.display();
        do{
            temp->data -= 1;
            temp = temp->next;
        } while(temp != list.head);
        cout << "list after onecycle" <<endl;
        list.display();
        while(list.contains(0)){
            list.deleteNode(0);
        }
        cout << "list after removing dead process" << endl;
        list.display();
        cout << "cycle complete" << endl;
        cout << endl;
    }
    

    return 0;
}
