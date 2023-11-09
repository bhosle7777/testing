#include <iostream>
using namespace std;

class animal{

	public:
		animal(){
			cout<<"Eating----"<<endl;
		}
		animal(int a){
			cout<<"Eating----"<<a<<endl;
		}
		
};

class dog : public animal{

	public:
		dog(){
			cout<<"Barking:---"<<endl;
		}
};

int main()
{
	animal a(5);
	dog d;
	//d.dog();
	//animal a(4);
	return 0;
}
