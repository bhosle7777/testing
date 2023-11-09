#include <bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std; 

int main() 
{ 
	int a[10] = {10, 20, 33, 456, 567, 89, 23, 34, 65, 102};
	int i;
	
	int size = sizeof(a)/sizeof(a[0]);
	map<int, int> m;
	
	for(i = 0; i<size; i++){
		m[a[i]]++;
	}
	
	map<int, int>::iterator it;
	
	cout<<"Sorted Array : ";
	for(it = m.begin(); it != m.end(); it++){
		cout<<it->first<<"\t";
	}
	
	cout<<endl;
	it = m.end();
	--(--it);
	cout<<"Second largest Element in array : "<<it->first;	
	
	cout<<endl;
	
	return 0; 
} 

