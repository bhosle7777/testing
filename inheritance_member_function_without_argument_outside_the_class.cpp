#include<iostream>
using namespace std;

class person{
	int id;
	char name[100];
	public:
	void get_p();
	void display_p();
};

void person::get_p(){
	cout<<"Enter person id:"<<endl;
	cin>>id;
	cout<<"Enter Person name : "<<endl;
	cin>>name;
}
void person::display_p(){
	cout<<endl<<id<<"\t"<<name<<"\t";
}

class student: private person{
	int fee;
	char course_name[100];
	public:
	void get_s();
	void display_s();
};

void student::get_s(){
	get_p();
	cout<<"Enter course name : "<<endl;
	cin>>course_name;
	cout<<"Enter course fee:"<<endl;
	cin>>fee;
}
void student::display_s(){
	display_p();
	cout<<course_name<<"\t"<<fee<<endl;
}

int main(){

	student s;
	s.get_s();
	s.display_s();
	return 0;
}
