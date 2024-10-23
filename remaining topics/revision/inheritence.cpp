#include <bits/stdc++.h>
using namespace std;


class A{
    private : 
    int x;

    protected:
    int y = 12;

    public :
    A(){
        cout << "a class ka constructor" << endl;
    }
    int a = 10;


};

class C{
    public :
    C(){
        cout << "c class ka constructor" << endl;
    }
};

class B : public A , public C{
    public:
    int b = 20;
    int c = y;
    B(){
        cout << "b class ka constuctor" << endl;
    }

    void geta(){
        cout << a;
    }
};

int main() {
    // cout << "hello world" << endl;
    B bhum;

    return 0;
}