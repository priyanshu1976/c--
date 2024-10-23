// #include <iostream>
// using namespace std;

// class Parent {
// public:
//     virtual void show() {
//         cout << "This is the Parent class's show function." << endl;
//     }
    
//     void sum(int a, int b) {
//         cout << "Sum of two integers: " << a + b << endl;
//     }

// };

// class Child : public Parent {
// public:
    
//     void show() override {
//         cout << "This is the Child class's show function." << endl;
//     }
// };

// int main() {

//     Parent p;
//     p.sum(10, 20);        
//     // p.sum(10.5, 20.5);    
//     Parent *ptr; 
//     Child *base;
//     base = &p;
//     base->show(); 
//     Child c; 
//     Child b;     
//     ptr = &c;
//     ptr->show();  

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Triangle{
    int base;
    int height;
    public : 
    Triangle(){}
    Triangle(int b , int h) : base(b) , height(h){}
    void get_data(){
        cout << base << " " << height;
    }
    virtual void  display_area(){
        cout << "area : " << (0.5)*base*height;
    }
};

class Rectangle : public Triangle {
    int length;
    int breadth;
    public : 
    Rectangle() {}

    // Parameterized constructor for Rectangle
    Rectangle(int l, int b) : length(l), breadth(b) {}

     void display_area() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }

    // Method to get rectangle data
    void get_data() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }

};

int main() {
    // Using Triangle object
    Triangle t(10, 20);
    t.get_data();
    t.display_area();

    // Using Rectangle object
    Rectangle r(5, 10);
    r.get_data();
    r.display_area();

    return 0;
}