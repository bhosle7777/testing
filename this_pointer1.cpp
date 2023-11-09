#include<iostream>

using namespace std;

class A{
	public: 
	int id;
	string name;
	int salary;
	
	A(int id, int salary, string name){
		this->id = id;
		this->name = name;
		this->salary = salary;
	}
	
	void display(){
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};

int main(){
	A a(101, 10000, "abc");
	A a2(102, 20000, "abc1");
	
	a.display();
	a2.display();
}
