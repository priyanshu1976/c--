#include <iostream>
using namespace std;
class shared {
static int a;
int b;
public:
shared(){}
void set(int i, int j) {a=i; b=j;}
void show();
} ;
int shared::a; // define a
void shared::show(){
cout << "This is static a: " << a;
cout << "\nThis is non-static b: " << b;
cout << "\n"; 
}
int main(){
    shared pp;
    pp.set(3,4);
    pp.show();
    
    shared bhumika;
    bhumika.set(6,6);
    bhumika.show();
    pp.show();
    return 0;
}

