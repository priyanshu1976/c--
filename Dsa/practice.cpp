// #include <bits/stdc++.h>
// using namespace std;

// class CircularQueue{
//     int*arr;
//     int cap;
//     int front;
//     int rear;
//     int size;
//     public:
//     CircularQueue(int cap){
//         this->cap = cap;
//         arr = new int[cap];
//         front =  0;
//         rear = -1;
//         size = 0;
//     }

//     bool isfull(){
//         return size >= cap;
//     }
//     bool isempty(){
//         return size <=0;
//     }

//     void push(int x){
//         if(size < cap){
//             rear = (rear + 1) % cap;
//             arr[rear] = x;
//             size++;
//         }
//         else{
//             cout << "queue is full\n";
//         }
//     }
//     void pop(){
//         if(size >0){
//             front = (front + 1)%cap;
//             size--;
//         }
//         else{
//             cout << "queue is empty \n";
//         }
//     }
//     int top(){
//         if (isempty()) {
//             cout << "queue is empty\n";
//             return -1; // Return -1 when queue is empty
//         }
//         if(size>0){
//             return arr[front];
//         }
//     }
// };

// int main() {
//     cout << "hello world" << endl;
//     CircularQueue pp(3);
//     pp.push(3);
//     pp.push(2);
//     pp.push(1);
//     cout << pp.top() << endl;
//     pp.pop();
//     cout << pp.top() << endl;
//     pp.pop();
//     cout << pp.top() << endl;
//     pp.pop();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public :
//      int val;
//      Node* next;

//      Node() : next(nullptr){}
//      Node(int x) : next(nullptr){val = x;}

// };


// class CircularLL{
//     Node* head ;
//     Node* tail ;

//     public:
//     CircularLL(){
//         head = nullptr;
//         tail = nullptr;
//     }

//     void push(int x){
//         if(head == nullptr){
//             head = new Node(x);
//             head->next = head;
//             tail = head; 
//         }
//         else{
//             tail->next = new Node(x);
//             tail = tail->next;
//             tail->next = head;
//         }
//     }

//     void del(int val){
//         Node* temp = head;
//         do{
//             temp = temp->next;
//         } while(temp->next->val != val and temp!= head);
//         if(temp->next->val == val){

//         temp->next = temp->next->next;
//         }
//         else{
//             cout << "val not found";
//         }
//     }

//     void display(){
//         Node* temp = head;
//         do{
//             cout << temp->val << "-->" ;
//             temp = temp->next;
//             if(temp == head) cout << head->val;
//         } while(temp != head);
//         cout << endl;
//     }


// };

// int main() {
//     cout << "hello world" << endl;
//     CircularLL pp;
//     pp.push(5);
//     pp.push(4);
//     pp.push(3);
//     pp.push(2);
//     pp.push(1);
//     pp.display();
//     pp.del(3);
//     pp.display();
//     pp.del(3);
//     pp.display();
//     return 0;
// }