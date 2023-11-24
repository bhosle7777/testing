#include<iostream>
using namespace std;

class demo{
	private : 
		int number;
	public :
		void get_data(int num);
		void change() const;
};

void demo :: get_data(int num){
	number = num;
}
void demo :: change() const{

	cout<<"Before :"<<number<<endl;
	const_cast<demo*>(this)->number--;
//remove constness of this
	cout<<"After : "<<number<<endl;
}

int main(){
	demo d1;
	d1.get_data(8);
	d1.change();
}



