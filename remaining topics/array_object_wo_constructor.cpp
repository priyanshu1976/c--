#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int roll;
	public:
		void setValue(string nm,int rn){
			name=nm;
			roll=rn;
		}
		void display(){
			cout<<"Name:"<<name<<", Roll:"<<roll<<endl;
		}
};
int main(){
	student s[3];
	string name;
	int roll;
	cout<<"enter name and roll number:\n";
	
	s[0].setValue("adv",123);
	cin>>name>>roll;
	s[1].setValue(name,roll);
	
	for(int i=0;i<3;i++){
		cin>>name>>roll;
		s[i].setValue(name,roll);
	}
	for(int i=0;i<3;i++){
		s[i].display();
	}
return 0;
}
