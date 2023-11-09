#include <iostream>
using namespace std;

class f{
	private:
		int private_variable;
	protected:
		int public_variable;
	
	public:
	f(){
		private_variable = 10;
		public_variable = 20;
	}
	friend class cfg;
};

class cfg{
	public:
	void display(f &f){
		cout<<"Parivate variable : "<<f.private_variable<<endl;
		cout<<"Parivate variable : "<<f.public_variable<<endl;
	}
};

int main(){
	f f;
	cfg c;
	c.display(f);
}
