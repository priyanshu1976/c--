#include <iostream>
using namespace std;
// class MyClass {
// public:
//     static int count;  // Static member variable
//     // Static member function
//     static void showCount() {
//         std::cout << "Number of MyClass instances: " << count << std::endl;
//     }

//     static void greet(){
//         cout << "this is a member function" << endl;
//     }

//     MyClass() {
//         ++count;
//         // std::cout << "Number of MyClass instances: " << count << std::endl;
//     }
// };

// // Definition and initialization of the static member variable
// int MyClass::count = 0;



class Test{
    static int x ;
    public:
    static int y;
    void func(int x){
        cout << "value of normal x is" << x << endl;
        cout << "value of scope resolution x is" << Test::x << endl;
        cout << "value of -> x is" << this->x << endl;
    }
};

int Test::x = 1;
int Test::y = 1;
int main() {
    // MyClass obj1;
    // MyClass obj2;
    // MyClass::greet();
    // // we can call member function without and instance 
    // MyClass::showCount();  // Access static function without an instance
    Test obj;
    obj.func(5);

    return 0;
}