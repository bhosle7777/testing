#include<iostream>
using namespace std;

class person{
	int id;
	char name[100];
	public:
		void get_p(){
			cout<<"Enter person id:"<<endl;
			cin>>id;
			cout<<"Enter Person name : "<<endl;
			cin.getline(name, 100);
		}
		void display_p(){
			cout<<id<<"\t"<<name;
		}
};

class student:person{
	int fee;
	char course_name[100];
	public:
	void get_s(){
			get_p();
			cout<<"Enter course fee:"<<endl;
			cin>>fee;
			cout<<"Enter course name : "<<endl;
			cin.getline(course_name, 100);
	}
	void display_s(){
		display_s();
		cout<<fee<<"\t"<<course_name;
	}
};

int main(){

	student s;
	s.gets()
	s.display_s();
}
