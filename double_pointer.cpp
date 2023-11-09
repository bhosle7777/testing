#include<iostream>
using namespace std;

int main(){
	int r, c, i, j;
	int **p;
	
	cout<<"Enter row :";
	cin>>r;
	cout<<"Enter column :";
	cin>>c;

	*p = new int[r];	

	for(i = 0; i < r; i++){
		p[i] = new int[i];
	}
	
	for(i = 0; i<r; i++){
	   for(j = 0; j<c; j++){
		p[i][j] = j;   
	   }
	}

	for(i = 0; i<r; i++){
	   for(int j = 0; j<c; j++){
		cout<<p[i][j]<<"\t";   
	   }
	   cout<<endl;
	}
}
