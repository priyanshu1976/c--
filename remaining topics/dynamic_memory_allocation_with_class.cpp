#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}

    int area(){
        return length * width;
    }
};

int main() {
    // Dynamically allocating a Rectangle object
    Rectangle *rectPtr = new Rectangle(10, 5);

    // Accessing members using the pointer
    cout << "Area of rectangle: " << rectPtr->area() << endl;

    // Deallocating the object
    delete rectPtr;

    return 0;
}

