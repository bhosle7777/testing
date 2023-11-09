#include<iostream>
using namespace std;

class base{
	public:
		int a;
		void get_b(){
			cout<<"Enter value of A :";
			cin>>a;
		}
		void display_b(){
			cout<<"\n"<<"Value of A :"<<a<<endl;
		}
};

class child : public base{
	public:
		int b;
		void get_c(){
			get_b();
			cout<<"Enetr value of B: ";
			cin>>b;
		}
		void display_c(){
			display_b();
			cout<<"Value of B:"<<b<<endl;
		}
		void product(){
			cout<<"Product of "<<a<<" * "<<b<< " :"<<a * b<<endl;
		}
};

int main(){
	child c;
	c.get_c();
	c.display_c();
	c.product();
}
