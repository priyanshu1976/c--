#include <bits/stdc++.h>
using namespace std;

class A{
    int a = 10;
    public:
    static int count;

    static int getcount() const {
        return count ;
    }
    A(){
        count++;
    }
};

int A::count = 0;

int main() {
    cout << "hello world" << endl;
    A a;
    A b;
    A c;
    A d;
    A e;
    cout << A::getcount();
    return 0;
}