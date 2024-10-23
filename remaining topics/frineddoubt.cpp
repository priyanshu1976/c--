#include <bits/stdc++.h>
using namespace std;
class c2{
	int ctwo;
	public:
		void setStatus(int state){
			ctwo=state;
		}
		friend int idle();
};

class c1{
	int cone;
	public:
		void setStatus(int state){
			cone=state;
		}
		friend int idle();
};

int idle(){
    return cone + ctwo;
}

int main() {
    cout << "hello world" << endl;
    c1 pp;
    pp.setStatus(5);
    c2 prinsu
    prinsu.setStatus(5);
    cout << idle() << endl;


    return 0;
}