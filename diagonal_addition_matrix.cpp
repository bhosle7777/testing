#include <iostream>
using namespace std;

int main() {
    int a[4][4] = {{1,2,3, 10}, {4,5,6, 11}, {7,8,9, 12}, {13, 14, 15, 16}};
    int c = 0, d = 0;
    for(int i =0; i<4; i++){
    	for(int j = 0; j<4; j++){
    		cout<<a[i][j]<<"\t";	
    	}
    	cout<<endl;
    }
    
    for(int i =0; i<4; i++){
    	for(int j = 0; j < 4; j++){
    		if(j == i){
    			d = d + a[i][j];
    		}
    		if(j == 4 -i - 1){
	    		c = c + a[i][j];
	    	}
    	}
    }
    
    cout<<"d : "<<d<<"c : "<<c;
}
