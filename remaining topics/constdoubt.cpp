#include <bits/stdc++.h>
using namespace std;

class A{
    const int pp;
    public:
    // A(int x) {
    //     pp = x;
    // }
    A(int x): pp(x){}

    void display(){
        cout << pp;
    }

};
int main() {
    cout << "hello world" << endl;
    A priyanshu(10);
    priyanshu.display();

    return 0;
}