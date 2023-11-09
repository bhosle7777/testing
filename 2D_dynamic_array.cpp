#include<iostream>
using namespace std;

int main(){
	
	int n, c = 0;
	cout<<"Enter array range ";
	cin>>n;
	
	int **a = new int*[n];
	
	
	for(int i = 0; i<n; i++){
		a[i] = new int[i];
	}
	
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n;j++){
			a[i][j] = ++c;
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
