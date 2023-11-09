#include <bits/stdc++.h>

using namespace std; 

int main() 
{ 
	int a[10] = {10, 20, 33, 456, 567, 89, 23, 34, 65, 102};
	
	int size = sizeof(a)/ sizeof(a[0]);
	
	int i, j, temp;
	for(i = 0; i<size; i++){
		for(j = 0; j<size; j++){
			if(a[i] < a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
	for(i =0; i<size; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"Second Largest Element in array : "<<a[size -2]<<endl;
	
	
	return 0; 
} 

