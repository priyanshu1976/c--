#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;        // Array to hold the queue elements
    int front;      // Front points to the front element
    int rear;       // Rear points to the last element
    int capacity;   // Maximum number of elements in the queue
    int size;       // Current number of elements in the queue

public:
    // Constructor
    CircularQueue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    CircularQueue(){
        
    }

    // Destructor
    ~CircularQueue() {
        delete[] arr;
    }

    // Push function (enqueue)
    void push(int value) {
        if (size == capacity) {
            cout << "Queue is full. Cannot push " << value << endl;
            return;
        }
        rear = (rear + 1) % capacity;  // Circular increment
        arr[rear] = value;
        size++;
        cout << value << " pushed to queue" << endl;
    }

    // Pop function (dequeue)
    int pop() {
        if (size == 0) {
            cout << "Queue is empty. Cannot pop." << endl;
            return -1;  // Indicate that the queue is empty
        }
        int poppedValue = arr[front];
        front = (front + 1) % capacity;  // Circular increment
        size--;
        cout << poppedValue << " popped from queue" << endl;
        return poppedValue;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return size == capacity;
    }

    // Function to get the current size of the queue
    int getSize() {
        return size;
    }

    // Function to display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue queue(5);

    queue.push(10);
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.display();

    queue.pop();
    queue.display();

    queue.push(40);
    queue.push(50);
    queue.push(60);  // This will show "Queue is full."
    queue.display();

    return 0;
}
