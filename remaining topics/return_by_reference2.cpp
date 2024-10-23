#include <iostream>
using namespace std;
class Number {
	private:
    	int value;
	public:
    	Number(int v) : value(v) {}
    	int& getValue(){
        	return value;
    	}
    	void display() const {
        	cout << "Value: " << value << endl;
    	}
};

int main() {
    Number num(10);
    num.display();
    int &ref = num.getValue();  // ref basucallt uss jadah ka location hai 	
    ref = 20;
    num.display();
	ref = 30;
    num.display();


    return 0;
}


