#include <iostream>
using namespace std;

//int add(int a, int b){ return a+b;}

class parent{
	public:
	int add(int a, int b);
};

inline int parent::add (int a, int b){ return a +b;}

int main(){

	parent p;
	cout<<"Addition :"<<p.add(1, 4)<<endl;
	return 0;
}


