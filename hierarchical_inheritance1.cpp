#include<iostream>
using namespace std;

class vehicle{
	public:
	vehicle(){
		cout<<"This is vehicle "<<endl;
	}
};

class child1: public vehicle{

};

class child2: public vehicle{

};

int main(){
	child1 c1;
	child2 c2;
	return 0;
}
