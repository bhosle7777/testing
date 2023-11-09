#include<iostream>
using namespace std;

class base;

class anotherclass{
	public:
		void anotherfuntion(base &b);
};

class base{
	private:
	   int privatevariable;
	protected:
	   int protectedvariable;
	   
	public:
	base(){
		privatevariable = 10;
		protectedvariable = 20;
	}
	
	friend void anotherclass::anotherfuntion(base&);
};

void anotherclass::anotherfuntion(base& b) {
	cout<<"Private varibale: "<<b.privatevariable<<endl;
	cout<<"Protected variable: "<<b.protectedvariable<<endl;
}

int main(){
	base b;
	anotherclass a;
	a.anotherfuntion(b);
}
