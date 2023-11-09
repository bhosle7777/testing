#include<iostream>
using namespace std;

class base{
	public:
		int a;
		void get_b(int x){
			a = x;
		}
		void display_b(){
			cout<<"\n"<<"Value of A :"<<a<<endl;
		}
};

class child : public base{
	public:
		int b;
		void get_c(int x, int y){
			get_b(x);
			b = y;			
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
	c.get_c(4, 5);
	c.display_c();
	c.product();
}
