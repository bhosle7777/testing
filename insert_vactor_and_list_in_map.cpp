#include<iostream>
#include<vector>
#include<list>
#include<map>
using namespace std;

int main(){
	vector<int> v = {1, 4, 5, 7, 9};
	int i = 0;
	cout<<"Vector :";
	while(v[i] != 9){
		cout<<v[i]<<"\t";
		i++;
	}
	cout<<endl;
	
	cout<<"List :";
	list<int> l = {2, 4, 6, 8, 10};
	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); it++){
		cout<<*it<<"\t";
	}
	cout<<endl;
	
	cout<<"Map :";
	map<list<int>, vector<int>> m;
	//map<int , int> m;
	i = 0;
	while(i != 5) {
		list<int>::iterator it;
		vector<int>::iterator it2 = v.begin();
		for(it = l.begin(); it != l.end(); it++){
			m.insert(make_pair(*it, *it2));
			i++;
		}
	}	
	
	vector<int> key;
	map<list<int>, vector<int>> :: iterator it3 = m.begin();
	while(it3 != m.end()){
		 key = it3->second;
		it3++;
	}
	cout<<endl;
	
	
}
