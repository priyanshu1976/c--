#include<iostream>
using namespace std;
class MyClass{
	private:
		int x,y;
	public:
		MyClass(int x,int y){
			this->x=x;
			this->y=y;
		}
		MyClass& setX(int x){
			this->x=x;
			return *this;
		}
		MyClass& setY(int y){
			this->y=y;
			return *this;
		}
		void display() const{
			cout<<"x:"<<x<<", y:"<<y<<endl;
		}
};
int main(void){
	MyClass obj(10,20);
	obj.display();
	obj.setX(30).setY(30).display();	
	return 0;
}
