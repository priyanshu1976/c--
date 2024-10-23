#include<iostream>
using std::cin;
using std::cout;
using std::endl;
const int IDLE=0;
const int IN_USE=1;
class c2;
class c1{
	int status;
	public:
		void setStatus(int state){
			status=state;
		}
		friend int idle(c1 a,c2 b);
};
class c2{
	int status;
	public:
		void setStatus(int state){
			status=state;
		}
		friend int idle(c1 a, c2 b);
};
int idle(c1 a,c2 b){
	if(a.status || b.status)
		return 0;
	else
		return 1;
}
int main(void){
	c1 x;
	c2 y;
	x.setStatus(IDLE);
	y.setStatus(IDLE);
	cout<<"First call of Friend Function:\n";
	if(idle(x,y))
		cout<<"Screen can be used"<<endl;
	else
		cout<<"In Use"<<endl;
	
	cout<<"Second call of Friend Function:\n";

	x.setStatus(IN_USE);
	if(idle(x,y))
		cout<<"Screen can be used"<<endl;
	else
		cout<<"In Use"<<endl;
return 0;
}
