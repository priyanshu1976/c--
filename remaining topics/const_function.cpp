#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    MyClass(int val){
    	x=val;
	}
    // Const member function - cannot modify any member variables
    int getX() const {
        // x = 10; // Error: can't modify member variable in const function
        return x;
    }

    // Non-const member function - can modify member variables
    void setX(int val) {
        x = val;
    }

    // Const function that can be called on a const object
    void print() const {
        cout << "x = " << x << endl;
    }
};

int main() {
    MyClass obj(5);

    // Calling const function on a non-const object
    cout << "Initial value of x: " << obj.getX() << endl; // Output: 5

    obj.setX(10);  // Modifying x through non-const function
    obj.print();   // Output: x = 10

    // Using const object
    const MyClass constObj(15);
    // constObj.setX(20); // Error: cannot call non-const function on const object
    cout << "Value of x in const object: " << constObj.getX() << endl; // Output: 15
    constObj.print();  // Output: x = 15

    return 0;
}

