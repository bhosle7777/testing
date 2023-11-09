#include<iostream>
using namespace std;

class A{
	
	protected:
		int a, b;	
	public:

	void getdata(){
		cout<<"Enter value of a : ";
		cin>>a;
		cout<<"Enter value of b : ";
		cin>>b;
	}
};

class B : public A{
	public:
	void multiplication(){
		cout<<"Multiplication : "<<a*b<<endl;
	}
};

class C : public A{
	public:
	void Addition(){
		cout<<"Addition : "<<a+b<<endl;
	}
};

int main(){
	C c1;
	B b1;
	b1.getdata();
	b1.multiplication();
	c1.getdata();
	c1.Addition();
}
