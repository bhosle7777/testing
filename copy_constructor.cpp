#include<iostream>
using namespace std;

class student{
	public:
	
	int id;
	string name;
	int *p;
	
	student()
	{
		p = new int;
	}
	
	student(student1 &st)
	{
		id = st.id;
		name = st.name;
		p = new int;
		*p = *(st.p);
	}
	
	void get_data(int a, string b, int z)
	{
		id = a;
		name = b;
		*p = z;	
	}
	
	void display(){
	
		cout<<"ID : "<< id<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"*p:  "<<*p<<endl;
	}
	
};

int main()
{
	student s;
	s.get_data(101, "Demo", 7);
	student s2 = s;
	s2.display();
	
	return 0;
}
