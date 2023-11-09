#include <iostream>
using namespace std;

class A{
	public:
	int id;
	string name;
	float salary;
	A(int i, string a, float s){
		id = i;
		name = a;
		salary = s;
	}
	
	void display(){
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};

int main(){
	A a(101, "Demo", 20000);
	A a1(102, "Dmeo2", 30000);
	a.display();
	a1.display();
	//Create diifferent object otherwise object overload and display same data
	return 0;
}
