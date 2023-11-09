#include<iostream>
#include <vector>

using namespace std;


struct demo{
	int id;
	string name;
	int no;
}de;

int main(){

	vector<struct demo> d;
	
	for(int i = 0; i < 5; i++){
		cin>>de.name>>de.no;
		de.id++;
		d.push_back(de);
	}
	
	for(int i = 0; i<d.size(); i++){
		de = d.at(i);
		cout<<de.id<<" "<<de.name<<" "<<de.no<<endl;
	}
	cout<<endl;
	
	/*int n, no;
	vector<int> v;
	vector<int> v2 = {9, 8,7,6};
	
	for(int i = 0; i<5; i++){
		v.push_back(i);
	}
	
	cout<<"size of vector:-- "<<v.size()<<endl;
	cout<<"Insert element on ___ possition : ";
	cin>>n;
	cout<<"Insert element : ";
	cin>>no;
	if( n > v.size()){
		cout<<"size of vector is less than you want to insert elemnet on possition"<<endl;
		return 0;
		}
	v.insert(v.begin() + n, no);
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v.swap(v2);	
	for(int i = 0; i<v2.size(); i++){
		cout<<v2[i]<<" ";
	}
	cout<<endl;
	cout<<"size of vector:-- "<<v.size()<<endl;
	v.insert(v.begin() + 3, 11);
	cout<<"size of vector:-- "<<v.size()<<endl; */
}
