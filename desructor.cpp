#include <iostream>
using namespace std;

class demo{
	public:
	static int a;
	
	demo(){
		cout<<"Constructor---"<<endl;
		cout<<"static ---"<<a<<endl;
		a++;
	}
	~demo(){
		cout<<"Destructor----"<<endl;
	}

};
int demo::a = 0;

int main(){

	demo d;
	demo d2;
	return 0;
}
