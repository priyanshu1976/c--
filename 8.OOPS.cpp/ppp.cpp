#include <bits/stdc++.h>
using namespace std;

class prinsu

{
protected :
private:
int sakya;
public:
 int bhumika;
prinsu(int n) : bhumika(n) {}; 
int avani;
void love();
};

void prinsu::love(){
    cout << "love bhumbhum" << endl;
}



int main() {
    cout << "" << endl;
    // can't access the private and protected things
    prinsu pp(8);
    cout << pp.bhumika << endl;
    return 0;
}