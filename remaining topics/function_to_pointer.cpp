#include<iostream>
using namespace std;
long fact(int num){
	if(num==0)
		return 1;
	else
		return num*fact(num-1);
}
int main(void){
	int n;
	long (*ptrfact)(int); //declaration: definition of pointer to function
	ptrfact=fact; //address of function to pointer assignment
	cout<<"Enter an integer number:";
	cin>>n;
	//calling function using poiter to function using derefering pointer 
	long f1=fact(n);
	//direct calling function using poiter to function 
	long f2=ptrfact(n);
	cout<<"Factorial of n using f1: "<<f1<<endl;
	cout<<"Factorial of n using f2: "<<f2<<endl;
	cout<<"Factorial of n+1: "<<ptrfact(n+1)<<endl;
	return 0;
}
	