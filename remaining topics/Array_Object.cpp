#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		int roll;
	public:
		student(): name("Unknown"), roll(0){}
		student(string nm,int rn):name(nm),roll(rn){}
		void display(){
			cout<<"Name:"<<name<<", Roll:"<<roll<<endl;
		}
};
int main(void){
	cout<<"default initialization\n";
	student s1[3];
	for(int i=0;i<3;i++){
		s1[i].display();
	}
	cout<<"parameterized initialization\n";	
	student s2[3]={student("AB",100),student("CD",101),student("EF",102)};
	for(int i=0;i<3;i++){
		s2[i].display();
	}
	cout<<"initialization using array of objects with initializer list\n";	
	student s3[3]={{"AB",100},{"CD",101},{"EF",102}};
	for(int i=0;i<3;i++){
		s3[i].display();
	}
	
	cout<<"Pointer to Object\n";
	student *std;
	student s4("GH",103);
	std=&s4;
	cout<<"Pointer call function:\n";
	s4.display();
	std->display();
	
	
	cout<<"display using array pointer\n";
	std=s3;
	for(int i=0;i<3;i++){
		std->display();
		std++;
	}
	return 0;
}
