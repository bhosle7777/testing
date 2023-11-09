#include<iostream>
using namespace std;

class base{
	public:
	void disp_b(){
		cout<<" Base class "<<endl;
	}
};

class child : public base{
	public:
	child(){
		disp_b();
	}
};

int main(){
	child c;
	return 0;
}
