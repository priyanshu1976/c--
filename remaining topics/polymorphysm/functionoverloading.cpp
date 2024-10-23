#include <bits/stdc++.h>
using namespace std;

// class  priyanshu{
//     public:
//     int marks = 0;
//     int getmarks(int number){
//         return number + marks;
//     }
//     // Changed to accept a double parameter
//     double getmarks(double number) {
//         return number + marks;
//     }
// };

// int main() {
//     cout << "hello world" << endl;
//     priyanshu student;
    
//     // Using getmarks with int parameter
//     int intResult = student.getmarks(5);
//     cout << "Result with int parameter: " << intResult << endl;
    
//     // Using getmarks with double parameter
//     double doubleResult = student.getmarks(5.5);
//     cout << "Result with double parameter: " << doubleResult << endl;
//     return 0;
// }


// Base class
class Base {
public:
    void display() {
        cout << "Base class display()" << endl;
    }
    
    void display(int x) {
        cout << "Base class display(int): " << x << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // This declaration hides all Base::display() functions
    using Base::display; // this is impotant 
    void display(double x) {
        cout << "Derived class display(double): " << x << endl;
    }
};

int main() {
    Derived d;
    
    // d.display();    // Error: Base::display() is hidden
    // d.display(5);   // Error: Base::display(int) is hidden
    
    d.display(5.5);    // OK: Calls Derived::display(double)
    
    // To call hidden base functions, we need to use scope resolution
    d.display();     // OK: Calls Base::display()
    d.display(5);    // OK: Calls Base::display(int)
    
    return 0;
}

