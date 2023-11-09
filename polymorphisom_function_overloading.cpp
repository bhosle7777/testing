#include<iostream>
using namespace std;

class base{

	public:
	void func(int a){
		cout<<"value of A :"<<a<<endl;
	}
	
	void func(float a){
		cout<<"Value of B :"<<a<<endl;
	}
	
	void func(int a, float b){
		cout<<"Addition :"<<a + b<<endl;
	}
};

int main(){
	base b;
	b.func(2);
	b.func(13.3f);
	b.func(2, 12.445);
	return 0;
}
