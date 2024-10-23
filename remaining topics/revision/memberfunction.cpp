#include <bits/stdc++.h>
using namespace std;

class A{
    int x = 10;
    public:
    void getx();

};

inline int square(int x){
    return x*x;
}

void A::getx(){
    cout << x << endl;
}
int main() {
    cout << "hello world" << endl;
    A b;
    b.getx();
    cout << square(3) ;
    return 0;
}