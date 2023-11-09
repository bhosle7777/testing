#include <bits/stdc++.h>

using namespace std; 

int main() 
{ 
	int i, count = 0, n, no, uptono;
	
	cout<<"Enter No : ";
	cin>>no;
	cout<<"Enter Upto no : ";
	cin>>uptono;
	for(i = 0; i<uptono; i++){
		 n = i;
		while(n > 0) {
			 
			if(n % 10 == no) {
				count++;
			}
			n = n / 10;
		}
		
	}
	
	cout<<"Count of "<<no<<" between 1 to "<<uptono<<" is : "<<count<<endl;

	return 0; 
} 

