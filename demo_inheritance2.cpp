#include <iostream>
using namespace std;

class A{

	public:
	int a = 4, b = 5, c;
	
		 A(){
			c = a + b;
		}
};
 class B : public A{
 
 	public:
 		
 		B() {
 			cout<<"Addition ----> "<<c<<endl;
 		}
 };

int main(){
	B a1;
	return 0;
}
