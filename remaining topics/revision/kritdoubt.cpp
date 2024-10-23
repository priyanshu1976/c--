#include <bits/stdc++.h>
using namespace std;

class A {
public:
    void demm() {
        cout << "demm from A" << endl;
    }
};

// Virtual inheritance to solve diamond problem
class B : public virtual A {

    public:
    void demm() {
        cout << "demm from B" << endl;
    }
};

class C : public virtual A {
    public:
    void demm() {
        cout << "demm from C" << endl;
    }
};

class D : public B, public C {
public:
    void demm() {
        cout << "demm from D" << endl;
    }
};

int main() {
    D pp;
    pp.demm();  
    pp.C::demm();         
    pp.A::demm();    
    return 0;
}
