#include <iostream>
using namespace std; 

class animal{
	public:
		virtual void speak() = 0;
};

class cat: public animal{
	public:
		void speak(){
			cout<<"Speak cat : ";
		}
};

class dog: public animal{
	public:
		void speak(){
			cout<<"Speak Dog : ";
		}
};

int main(){
	
	animal *animalptr = new cat();
	
	cat *catptr = dynamic_cast<cat*>(animalptr);
	
	if(catptr == nullptr){
		cout<<"cast Fail cat : ";
	}
	else{
		catptr->speak();
	}
	
	cout<<endl;
	
	//animalptr = new dog();
	
	dog *dogptr = dynamic_cast<dog*>(animalptr);
	if(dogptr == nullptr){
		cout<<" Cast Fail dog : ";
	}
	else{
		dogptr->speak();
	}
	//cast fail because we cast animalptr (which have address of cat class) to dogptr.
	
	return 0;
}
