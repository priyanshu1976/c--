#include <bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real, imag;
    public:
        Complex(int r = 0, int i =0) : real(r), imag(i) {}

        // Overloading + operator
        Complex operator - (const Complex& c) {
            return Complex(real + c.real, imag + c.imag);
        }

        void display() {
            cout << real << " + i" << imag << endl;
        }
};

int main() {
    Complex c1(12, 7), c2(6, 8), c3;
    c1.display();
    c2.display();
    c3 = c1 - c2; // An example call to "operator+"
    cout << "c1 + c2 = ";
    c3.display();
    return 0;
}