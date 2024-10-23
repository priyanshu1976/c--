#include <bits/stdc++.h>
using namespace std;
// replace the function code with the stress of overhead function call 
// inline function is a request not a command for the compiler 
// the compiler can reject this request if the function contain complex this such as loop , recursion 
inline int square(int x){
    return x*x;
}


int main(){
    int x;
    cin >> x;

    cout << "the product of x is : " << square(x) << endl;
    return 0;
}