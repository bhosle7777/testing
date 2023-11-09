#include <bits/stdc++.h>
using namespace std; 

int main() 
{
	int a[10] = {1, 3, 0, 4, 0, 6, 4, 0, 7, 0};
	int temp = 0;
	int i , j;
	for (i = 0; i<10; i++){
		for(j = i; j <10; j++){
			if(a[i] == 0){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i = 0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	return 0; 

} 

