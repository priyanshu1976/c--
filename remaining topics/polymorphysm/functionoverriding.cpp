#include <bits/stdc++.h>
using namespace std;

// class shape{
//     public:
//     virtual void  draw(){
//         cout << "i am a shape" << endl;
//     }
// };

// class square: public shape{
//     public : 
//     void draw()  {
//         cout << "i am a square" << endl;
//     }
// };

// int main() {
//     // square *pp = new square();
//     // pp->draw();

//     shape* s1 = new shape(); 
//     shape* s2 = new square(); 

    
//     s1->draw();  // Will output: I am a shape
//     s2->draw();  // Will output: I am a square
    
//     delete s1;
//     delete s2;

//     return 0;
// }

// class Shape {
// public:
//     virtual double area() = 0;  // This is a pure virtual function
//     virtual void draw() = 0;    // Another pure virtual function
    
//     void setColor(int color) {
//         // Regular member function
//         this->color = color;
//     }

// protected:
//     int color;
// };

// class Circle : public Shape {
// public:
//     Circle(double radius) : radius(radius) {}
    
//     double area() override {
//         return 3.14159 * radius * radius;
//     }
    
//     void draw() override {
//         cout << "Drawing a circle" << endl;
//     }

// private:
//     double radius;
// };

// class Square : public Shape {
// public:
//     Square(double side) : side(side) {}
    
//     double area() override {
//         return side * side;
//     }
    
//     void draw() override {
//         cout << "Drawing a square" << endl;
//     }

// private:
//     double side;
// };

// class Incomplete : public Shape {
// public:
//     double area() override {
//         return 0;
//     }
//     // draw() is not implemented, so Incomplete is still abstract
// };

// // Incomplete incomplete;  // Error: Cannot instantiate abstract class

// int main() {
//     // Shape shape;  // Error: Cannot instantiate abstract class
    
//     Circle circle(5);
//     Square square(4);
    
//     Shape* shapes[] = {&circle, &square};
    
//     for (Shape* shape : shapes) {
//         shape->draw();
//         cout << "Area: " << shape->area() << endl;
//     }
    
//     return 0;
// }

// class AbstractBase {
// public:
//     virtual void pureVirtualFunc() = 0;  // Declaration inside the class
//     virtual ~AbstractBase() = default;
// };

// // Definition outside the class
// void AbstractBase::pureVirtualFunc() {
//     std::cout << "Default implementation in AbstractBase" << std::endl;
// }

// class Derived : public AbstractBase {
// public:
//     // Uses the default implementation from AbstractBase

// };

// class AnotherDerived : public AbstractBase {
// public:
//     void pureVirtualFunc() override {
//         std::cout << "Overridden in AnotherDerived" << std::endl;
//     }
// };

// int main() {
//     // AbstractBase ab;  // Error: Cannot create object of abstract class
//     // the error here is if i make a abstract class with the pure virtual functio with the default declaration of pure virtual function outside the class 
//     // and then i inhert the class if i dont redefine the virtual function i am not able to create the obj of derived class
//     Derived d;
//     d.pureVirtualFunc();  // Outputs: "Default implementation in AbstractBase"
    
//     AnotherDerived ad;
//     ad.pureVirtualFunc();  // Outputs: "Overridden in AnotherDerived"
    
//     return 0;
// }

class AbstractBase {
public:
    virtual void pureVirtualFunc() = 0;  // Declaration inside the class
    virtual ~AbstractBase() = default;
};

// Definition outside the class
void AbstractBase::pureVirtualFunc() {
    std::cout << "Default implementation in AbstractBase" << std::endl;
}

class Derived : public AbstractBase {
public:
    // Must explicitly override the pure virtual function
    void pureVirtualFunc() override {
         AbstractBase::pureVirtualFunc() ;
        // Can call the base class implementation if desired
    }
};

class AnotherDerived : public AbstractBase {
public:
    void pureVirtualFunc() override {
        std::cout << "Overridden in AnotherDerived" << std::endl;
    }
};

int main() {
    // AbstractBase ab;  // Error: Cannot create object of abstract class
    
    Derived d;
    d.pureVirtualFunc();  // Outputs: "Default implementation in AbstractBase"
    
    AnotherDerived ad;
    ad.pureVirtualFunc();  // Outputs: "Overridden in AnotherDerived"
    
    return 0;
}