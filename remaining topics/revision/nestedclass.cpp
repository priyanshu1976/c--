#include <bits/stdc++.h>
using namespace std;

class vineet{
    int chetan = 10;
    public:
    friend int supreme(vineet &p);
};

int supreme(vineet &p){
    return p.chetan + 10000;
}

int main() {
    cout << "hello world" << endl;
    return 0;
}