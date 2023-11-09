#include <iostream>
#include<set>
#include<iterator>
using namespace std; 

int main(){
	int arr[] = { 10, -20, -30, 0, 70, -4 };
	int n=sizeof(arr)/sizeof(arr[0]);

	int pro = 1;
	int a[10];

	set<int> s;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
			pro = 1;
		if(arr[i] != 0)
		    	pro = pro * arr[i];
		if(pro > 0){		
			s.insert(pro);
			
		}
	}
    
	set<int>::iterator it;

	it = s.end();
	it--;
	cout<<"Maximum Product : "<<*it<<endl;
}
