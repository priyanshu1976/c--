#include<iostream>
using namespace std;
int & max(int &x, int &y){
	if(x>y)
		return x;
	else
		return y;
}
int main(void){
	int a,b,c;
	cout<<"enter two integers:"<<endl;
	cin>>a>>b;
	cout<<"The value of a and b before function call: "<<a<<","<<b<<endl;
	max(a,b)=425;
	cout<<"The value of a and b after function call: "<<a<<","<<b<<endl;
	return 0;
}

