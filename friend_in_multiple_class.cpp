#include<iostream>
using namespace std;

class abc;

class xyz{
	private:
		int private_variable;
	protected:
		int protected_variable;
	public:
	xyz(){
		private_variable = 10;
		protected_variable = 20;
	}
	friend int addition(xyz&);
};

class abc{
	private:
		int private_variable_abc;
	protected:
		int protected_variable_abc;
	public:
	abc(){
		private_variable_abc = 20;
		protected_variable_abc = 20;
	}
	friend int addition(abc&);
};

int addition(abc& a){
	cout<<"Addtion :"<<a.private_variable_abc + a.protected_variable_abc;

	return 0;
}

int main(){
	abc a;
	addition(a);
}
