#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[] = { 10, -20, -30, 0, 70 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int result = arr[0];
    
    for (int i = 0; i < n; i++)
    {
	for(int j = i; j<n; j++){
		for(int k = i; k<=j; k++){
			cout<<arr[k]<<"\t";
		}
		cout<<endl;
	}
    }
    
}
