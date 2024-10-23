#include <iostream>
using namespace std;

class Circle {
private:
    const double radius;  // Const data member (must be initialized in the constructor)
	const float PI=3.14159;    

public:
    // Constructor with initializer list to initialize the const data member
    Circle(double r):radius(r){}
//    Circle(double r){      //this constructor definition will not work
//    	radius=r;
//	}
    // Const member function to get the radius (cannot modify the object)
    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return PI * radius * radius;
    }

    void display() const {
        cout << "Circle with radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Circle circle(5.0);  
	
	// Calling const member functions
    cout << "Radius: " << circle.getRadius() << endl;  
    circle.display();  
	
    // circle.radius = 10; // Error: but why?

    return 0;
}

