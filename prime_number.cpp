#include <bits/stdc++.h>
using namespace std; 

int main() 
{
	int i, j, a, count = 0;
	cout<<"Prime Number : "<<endl;
	for(i = 1; i<100; i++){
		for(j = 2; j < i; j++){
			a = i % j;
			
			if(a == 0){
				count++;
				break;
			}
			
		}
		if(count == 0 && i != 1){
				cout<<i<<"\t";
		}
		count =0;
	}	

	cout<<endl;
	return 0; 

} 

