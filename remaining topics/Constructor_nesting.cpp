#include<iostream>
using namespace std;
class Complex{
	private:
		double real, img;
	public:
		Complex():Complex(1.0,1.0){}
//		cout<<"Default Call"<<endl;
//		};
		Complex(double real,double img):real(real),img(img){}
		void display() const{
			cout<<"In Fun:"<<real<<"+i"<<img<<endl;
		}
};
int main(){
	Complex c1;
	c1.display();
	Complex c2(3.8,4.7);
	c2.display();
	return 0;
}
