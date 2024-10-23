#include<iostream>
using namespace std;
class shared{
	private:
		static int resource;
	public:
		static int getResource(){
			if(resource)
				return 0;
			else{
				resource=1;
				return 1;
			}
		}
		void freeResource(){
			resource=0;
		}	
};
int shared::resource;
int main(void){
	shared obj1, obj2;
	if(obj1.getResource())
		cout<<"Obj1 has resource"<<endl;
	if(!shared::getResource())
		cout<<"Obj1 has resource"<<endl;
	obj1.freeResource();
	if(shared::getResource())
		cout<<"Obj2 has resource"<<endl;
	return 0;
}
