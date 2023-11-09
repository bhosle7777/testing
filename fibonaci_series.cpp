#include <bits/stdc++.h>
using namespace std; 

int main() 
{

	int i, t1 = 0, t2 = 1, next = 0;
	
	for(i = 0; i<7; i++){
		if(i == 0)
			cout<<t1<<"\t";
		if(i == 1)
			cout<<t2<<"\t";
		
		if(i > 1){
			next = t1 + t2;
			cout<<next<<"\t";
			t1 = t2;
			t2 = next;	
		}
	}
	

 
/*	int n;
	cout<<"Enter no : ";
	cin>>n;
	
	int b[n], sum = 0, i;
	b[0] = 0; b[1] = 1;
	
	for(i = 1; i<n; i++){
		sum = b[i] + b[i -1];
		b[i + 1] = sum;
	}
	
	cout<<"Fobonaci Series : ";
	for(i = 0; i<n; i++){
		cout<<b[i]<<"\t";
	}
	
	cout<<endl;
*/
	return 0; 

} 

