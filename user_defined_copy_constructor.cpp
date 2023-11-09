#include<iostream>

using namespace std;

class demo{
	int id;
	public:
		void set_value(int x){
			id = x;
		}
		void display(){
			cout<<"value of id :"<<id<<endl;
		}
		
		demo(){	};
		
		demo( demo &t){
			id = t.id;
		}
};

int main(){
	demo obj1;
	obj1.set_value(10);
	obj1.display();
	
	demo obj2(obj1);
	obj1.display();
	return 0;
}
