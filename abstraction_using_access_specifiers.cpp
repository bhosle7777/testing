#include <iostream>
using namespace std;

class abstraction{
	private:
		int x, y;
	public:
 		void addition(){
 			cout<<"Enter X and Y :"<<endl;
 			cin>>x>>y;   // two private variable access in public funtion
 		}
 		void displayaddition(){
 			cout<<"Addition : "<<x + y<<endl;
 		}
};

int main(){
	abstraction abc;
	abc.addition();
	abc.displayaddition();
	return 0;
}
